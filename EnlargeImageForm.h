#pragma once

namespace Leather {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EnlargeImageForm
	/// </summary>
	public ref class EnlargeImageForm : public System::Windows::Forms::Form
	{
	public:
		EnlargeImageForm(Image^ image)
		{
			InitializeComponent();
			
			originalImage = image;
			pictureBox1->Image = originalImage;

			this->MouseWheel += gcnew MouseEventHandler(this, &EnlargeImageForm::EnlargeImageForm_MouseWheel);
			this->KeyPreview = true;

			pictureBox1->SizeMode = PictureBoxSizeMode::AutoSize;
			this->AutoScroll = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnlargeImageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::PictureBox^ pictureBox1;
		Image^ originalImage;
		float zoomFactor = 1.0f;
		const float zoomIncrement = 0.1f;
		const float maxZoomFactor = 5.0f;
		const float minZoomFactor = 0.1f;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(123, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1886, 1027);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// EnlargeImageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1900, 1039);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"EnlargeImageForm";
			this->Text = L"EnlargeImageForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		
#pragma endregion
		
	
		 private:
			 void EnlargeImageForm_MouseWheel(Object^ sender, MouseEventArgs^ e)
			 {
				 Point mousePos = pictureBox1->PointToClient(e->Location);

				 if (e->Delta > 0)
				 {
					 
					 zoomFactor += zoomIncrement;
				 }
				 else if (e->Delta < 0)
				 {
				 
					 zoomFactor -= zoomIncrement;
				 }

				 zoomFactor = Math::Min(maxZoomFactor, Math::Max(minZoomFactor, zoomFactor));

				 ApplyZoom(mousePos);
			 }
			 void ApplyZoom(Point mousePosition)
			 {
				 if (originalImage != nullptr)
				 {
					 int newWidth = static_cast<int>(originalImage->Width * zoomFactor);
					 int newHeight = static_cast<int>(originalImage->Height * zoomFactor);

					 Bitmap^ zoomedBitmap = gcnew Bitmap(originalImage, newWidth, newHeight);

					 float relativeMouseX = (float)mousePosition.X / pictureBox1->Width;
					 float relativeMouseY = (float)mousePosition.Y / pictureBox1->Height;

					 int currentScrollX = -this->AutoScrollPosition.X;
					 int currentScrollY = -this->AutoScrollPosition.Y;

					 int newScrollX = (int)((relativeMouseX * newWidth) - mousePosition.X);
					 int newScrollY = (int)((relativeMouseY * newHeight) - mousePosition.Y);

					 this->AutoScrollPosition = Point(newScrollX, newScrollY);

					 pictureBox1->Image = zoomedBitmap;
					 pictureBox1->Size = zoomedBitmap->Size;
				 }
			 }


	};
}
