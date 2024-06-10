#pragma once
#include "EnlargeImageForm.h"
#include<Windows.h>
#include<vcclr.h>
#include<sstream>
#include<fstream>
#include<string>
#include<unordered_map>

namespace Leather {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	// Function to read data from CSV file
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UpdateTextBoxes("NILL", "NILL", "NILL", "NILL",  "NILL");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBoxLeatherName;
	private: System::Windows::Forms::TextBox^ textBoxLeatherSetID;


	private: System::Windows::Forms::TextBox^ textBoxDate;





	private: System::Windows::Forms::TextBox^ textBoxTime;

	private: System::Windows::Forms::TextBox^ textBoxSNo;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label23;



	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label24;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxLeatherName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLeatherSetID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSNo = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 232);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(539, 259);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"INSPECTION";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(309, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 43);
			this->button2->TabIndex = 5;
			this->button2->Text = L"STOP INSPECTION";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"START INSPECTION";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"COMPANY:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"INSPECTION ID:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 31);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(309, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 31);
			this->textBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(557, 232);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(445, 259);
			this->panel2->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(111, 192);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(216, 43);
			this->button4->TabIndex = 7;
			this->button4->Text = L"LOAD LEATHER";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(179, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"OR";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(240, 141);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(179, 31);
			this->textBox7->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(240, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(179, 31);
			this->textBox6->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(377, 32);
			this->label7->TabIndex = 7;
			this->label7->Text = L"SEARCH / LOAD LEATHER";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"LEATHER ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 23);
			this->label4->TabIndex = 2;
			this->label4->Text = L"S.NO.";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(200, 158);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(456, 352);
			this->panel3->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(18, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(420, 294);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(182, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 23);
			this->label8->TabIndex = 8;
			this->label8->Text = L"LEATHER";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(702, 241);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 76);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ENLARGE IMAGE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 497);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(990, 506);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 124;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 127;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 184;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 175;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 300;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->textBox13);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox17);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->textBox16);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->textBoxLeatherName);
			this->panel4->Controls->Add(this->textBoxLeatherSetID);
			this->panel4->Controls->Add(this->textBoxDate);
			this->panel4->Controls->Add(this->textBoxTime);
			this->panel4->Controls->Add(this->textBoxSNo);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->panel3);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Location = System::Drawing::Point(1008, 232);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(994, 771);
			this->panel4->TabIndex = 11;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(839, 593);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(64, 20);
			this->label20->TabIndex = 45;
			this->label20->Text = L"sq.mm";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(192, 687);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 20);
			this->label14->TabIndex = 44;
			this->label14->Text = L"%";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(617, 593);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(64, 20);
			this->label24->TabIndex = 43;
			this->label24->Text = L"sq.mm";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(192, 593);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(64, 20);
			this->label23->TabIndex = 42;
			this->label23->Text = L"sq.mm";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(55, 681);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(131, 31);
			this->textBox13->TabIndex = 38;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(294, 681);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(131, 31);
			this->textBox10->TabIndex = 37;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(702, 585);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(131, 31);
			this->textBox17->TabIndex = 36;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(55, 585);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(131, 31);
			this->textBox11->TabIndex = 35;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(480, 585);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(131, 31);
			this->textBox16->TabIndex = 34;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(522, 644);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 76);
			this->button6->TabIndex = 33;
			this->button6->Text = L"LEATHER SUMMARY";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(702, 644);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 76);
			this->button5->TabIndex = 32;
			this->button5->Text = L"EXIT";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(291, 644);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(214, 23);
			this->label21->TabIndex = 29;
			this->label21->Text = L"GRADE OF LEATHER";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(25, 644);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(295, 23);
			this->label19->TabIndex = 27;
			this->label19->Text = L"PERCENTAGE USABLE AREA";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(294, 585);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(131, 31);
			this->textBox12->TabIndex = 25;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(25, 549);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(237, 23);
			this->label18->TabIndex = 22;
			this->label18->Text = L"TOTAL LEATHER AREA";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(291, 549);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(177, 23);
			this->label17->TabIndex = 21;
			this->label17->Text = L"TOTAL DEFECTS";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(472, 549);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(224, 23);
			this->label16->TabIndex = 20;
			this->label16->Text = L"TOTAL DEFECT AREA";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(682, 549);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(224, 23);
			this->label15->TabIndex = 19;
			this->label15->Text = L"TOTAL USABLE AREA";
			// 
			// textBoxLeatherName
			// 
			this->textBoxLeatherName->Location = System::Drawing::Point(122, 71);
			this->textBoxLeatherName->Name = L"textBoxLeatherName";
			this->textBoxLeatherName->Size = System::Drawing::Size(186, 31);
			this->textBoxLeatherName->TabIndex = 17;
			this->textBoxLeatherName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxLeatherSetID
			// 
			this->textBoxLeatherSetID->Location = System::Drawing::Point(340, 71);
			this->textBoxLeatherSetID->Name = L"textBoxLeatherSetID";
			this->textBoxLeatherSetID->Size = System::Drawing::Size(161, 31);
			this->textBoxLeatherSetID->TabIndex = 16;
			this->textBoxLeatherSetID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(533, 71);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(145, 31);
			this->textBoxDate->TabIndex = 15;
			this->textBoxDate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxTime
			// 
			this->textBoxTime->Location = System::Drawing::Point(718, 71);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->Size = System::Drawing::Size(150, 31);
			this->textBoxTime->TabIndex = 14;
			this->textBoxTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxSNo
			// 
			this->textBoxSNo->Location = System::Drawing::Point(15, 71);
			this->textBoxSNo->Name = L"textBoxSNo";
			this->textBoxSNo->Size = System::Drawing::Size(79, 31);
			this->textBoxSNo->TabIndex = 10;
			this->textBoxSNo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(154, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 23);
			this->label13->TabIndex = 13;
			this->label13->Text = L"LEATHER ID";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(352, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(161, 23);
			this->label12->TabIndex = 12;
			this->label12->Text = L"INSPECTION ID";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(530, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(195, 23);
			this->label11->TabIndex = 11;
			this->label11->Text = L"INSPECTION DATE";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(715, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(189, 23);
			this->label10->TabIndex = 10;
			this->label10->Text = L"INSPECTION TIME";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(25, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 23);
			this->label9->TabIndex = 9;
			this->label9->Text = L"S.No.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		PopulateListViewFromExcel();
		listView1->ItemSelectionChanged += gcnew ListViewItemSelectionChangedEventHandler(this, &MyForm::ListView1_ItemSelectionChanged);
		String^ imagePath = "C:\\path\\to\\your\\image.jpg"; // Replace with your image path
		if (File::Exists(imagePath))
		{
			pictureBox1->Image = Image::FromFile(imagePath);
		}

	}
	private:System::Void PopulateListViewFromExcel()
	{
		// Add Path To .csv File, don't change Function Name
		String^ filePath = "C:\\Users\\ragha\\source\\repos\\Project3\\STUD\\LEATHER_HIDES\\LeatherList.csv";
		List<List<String^>^>^ csvData = gcnew List<List<String^>^>();

		try
		{
			StreamReader^ sr = gcnew StreamReader(filePath);
			while (!sr->EndOfStream)
			{
				String^ line = sr->ReadLine();
				array<String^>^ fields = line->Split(',');
				List<String^>^ rowData = gcnew List<String^>();
				for each (String ^ field in fields)
				{
					rowData->Add(field);
				}
				csvData->Add(rowData);
			}

			sr->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error reading CSV file: " + ex->Message);
			return;
		}
		for each (List<String^> ^ rowData in csvData)
		{
			ListViewItem^ item = gcnew ListViewItem(rowData[0]); 
			for (int i = 1; i < rowData->Count; i++)
			{
				item->SubItems->Add(rowData[i]);
			}
			listView1->Items->Add(item);
		}
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		EnlargeImageForm^ enlargeForm = gcnew EnlargeImageForm(pictureBox1->Image);
		enlargeForm->Show();
	}
	void InitializeTextBoxesToNIL(){
		array<TextBox^>^ textboxes = { textBox11, textBox12, textBox16, textBox17, textBox13, textBox10 };
		for each (TextBox ^ textbox in textboxes)
		{
		textbox->Text = "NIL";
		}
	}
	void PopulateGeneralTextBoxes(ListViewItem^ item)
	{
		textBoxSNo->Text = item->SubItems[0]->Text;
		textBoxLeatherName->Text = item->SubItems[5]->Text; 
		textBoxLeatherSetID->Text = item->SubItems[3]->Text;
		textBoxDate->Text = item->SubItems[1]->Text;
		textBoxTime->Text = item->SubItems[2]->Text;
	}
	private: System::Void ListView1_ItemSelectionChanged(System::Object^ sender, ListViewItemSelectionChangedEventArgs^ e)
		{
			if (e->IsSelected)
			{
				String^ leatherName = e->Item->SubItems[5]->Text;
				String^ sNo = e->Item->SubItems[0]->Text;
				String^ time = e->Item->SubItems[1]->Text;
				String^ date = e->Item->SubItems[2]->Text;
				String^ leatherSetID = e->Item->SubItems[3]->Text;
				UpdateTextBoxes(sNo, time, date, leatherSetID, leatherName);
				DisplayImage(leatherName);
				PopulateTextBoxesWithCSVData(leatherName);
				PopulateGeneralTextBoxes(e->Item);
			}
			else
			{
				InitializeTextBoxesToNIL();
				pictureBox1->Image = nullptr;
			}
		}
		   
    void UpdatePictureBox(String^ leatherName)
    {
        String^ folderPath = "C:\\Users\\ragha\\source\\repos\\Leather\\STUD\\LEATHER_HIDES\\HIDE_" + leatherName;
        String^ imagePath = folderPath + "\\HIDE_" + leatherName + ".bmp";

        if (File::Exists(imagePath))
        {
            Image^ image = Image::FromFile(imagePath);
            pictureBox1->Image = image;
        }
        else
        {
            pictureBox1->Image = nullptr;
        }
    }
	private: System::Void  DisplayImage(String^ leatherName)
	{
		try
		{
			// Change folder path
			String^ folderPath = Path::Combine("C:\\Users\\ragha\\source\\repos\\Leather\\STUD\\LEATHER_HIDES", "HIDE_" + leatherName);

			
			if (Directory::Exists(folderPath))
			{
				
				String^ bmpFileName = "HIDE_" + leatherName + ".bmp";
				String^ bmpFilePath = Path::Combine(folderPath, bmpFileName);

				
				if (File::Exists(bmpFilePath))
				{
					
					pictureBox1->Image = Image::FromFile(bmpFilePath);
				}
				else
				{
					pictureBox1->Image = nullptr;

				}
			}
			else
			{
			
				pictureBox1->Image = nullptr;
				
			}
		}
		catch (Exception^ ex)
		{
			
			MessageBox::Show("Error: " + ex->Message, "Image Loading Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void UpdateTextBoxes(String^ sNo, String^ time, String^ date, String^ leatherSetID,  String^ leatherName)
	{
		textBoxSNo->Text = sNo;
		textBoxTime->Text = time;
		textBoxDate->Text = date;
		textBoxLeatherSetID->Text = leatherSetID;
		textBoxLeatherName->Text = leatherName;
	}
	private: System::Void PopulateTextBoxesWithCSVData(String^ leatherName)
	{
		String^ folderPath = "C:\\Users\\ragha\\source\\repos\\Leather\\STUD\\LEATHER_HIDES\\HIDE_" + leatherName;
		String^ csvFilePath = folderPath + "\\Summary_" + leatherName + ".csv";

		Dictionary<String^, TextBox^>^ infoTextBoxMap = gcnew Dictionary<String^, TextBox^>();
		infoTextBoxMap->Add("TotalLeatherArea(in sq.ft)", textBox11);
		infoTextBoxMap->Add("TotalDefects", textBox12);
		infoTextBoxMap->Add("TotalDefectsArea(in sq.ft)", textBox16);
		infoTextBoxMap->Add("TotalUsableArea(in sq.ft)", textBox17);
		infoTextBoxMap->Add("UsableArea(in %)", textBox13);
		infoTextBoxMap->Add("GradeOfLeather", textBox10);

		for each (auto kvp in infoTextBoxMap)
		{
			kvp.Value->Text = "NIL";
		}

		try
		{
			
			StreamReader^ sr = gcnew StreamReader(csvFilePath);

			
			while (!sr->EndOfStream)
			{
				String^ line = sr->ReadLine();

				array<String^>^ fields = line->Split(',');

				if (fields->Length >= 3)
				{
					String^ information = fields[1]->Trim();
					String^ value = fields[2]->Trim();
					
					if (infoTextBoxMap->ContainsKey(information))
					{
						infoTextBoxMap[information]->Text = value;
					}
				}
			}

			
			sr->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error reading CSV file: " + ex->Message);
			return;
		}
	}
		   System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   bool found = false;
			   bool snoFound = false;
			   bool leatherNameFound = false;

			   
			   if (String::IsNullOrEmpty(textBox6->Text) && String::IsNullOrEmpty(textBox7->Text))
			   {
				   MessageBox::Show("Enter S.No. or Leather Name to Search", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return;
			   }

			
			   if (!String::IsNullOrEmpty(textBox6->Text))
			   {
				   for each (ListViewItem ^ item in listView1->Items)
				   {
					   if (item->SubItems[0]->Text == textBox6->Text) 
					   {
						   snoFound = true;
						   String^ leatherName = item->SubItems[5]->Text; 
						   if (String::IsNullOrEmpty(textBox7->Text) || textBox7->Text->Equals(leatherName, StringComparison::InvariantCultureIgnoreCase))
						   {
							   PopulateTextBoxesWithCSVData(leatherName);
							   PopulateGeneralTextBoxes(item);
							   DisplayImage(leatherName);
							   found = true;
							   break;
						   }
					   }
				   }
			   }

			   if (!found && !String::IsNullOrEmpty(textBox7->Text))
			   {
				   String^ leatherName = textBox7->Text;
				   for each (ListViewItem ^ item in listView1->Items)
				   {
					   if (item->SubItems[5]->Text->Equals(leatherName, StringComparison::InvariantCultureIgnoreCase)) // Assuming Leather Name is at index 5
					   {
						   leatherNameFound = true;
						   if (String::IsNullOrEmpty(textBox6->Text) || item->SubItems[0]->Text == textBox6->Text) // Assuming S.No. is at index 0
						   {
							   PopulateTextBoxesWithCSVData(leatherName);
							   PopulateGeneralTextBoxes(item);
							   DisplayImage(leatherName);
							   found = true;
							   break;
						   }
					   }
				   }
			   }

			   if (!found)
			   {
				   if (!String::IsNullOrEmpty(textBox6->Text) && !String::IsNullOrEmpty(textBox7->Text))
				   {
					   if (snoFound || leatherNameFound)
					   {
						   MessageBox::Show("S.No. and Leather ID don't match", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   }
					   else
					   {
						   MessageBox::Show("No matching record found", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
					   }
				   }
				   else
				   {
					   MessageBox::Show("No matching record found", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   }
				   InitializeTextBoxesToNIL();
				   pictureBox1->Image = nullptr;
			   }
		   }

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
