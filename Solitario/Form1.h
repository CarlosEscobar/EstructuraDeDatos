#pragma once

#include "stdafx.h"
#include <iostream>


namespace Solitario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Juego J;
	int cont1=0;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  c1;
	private: System::Windows::Forms::PictureBox^  c2;
	private: System::Windows::Forms::PictureBox^  c3;
	private: System::Windows::Forms::PictureBox^  c4;
	private: System::Windows::Forms::PictureBox^  c5;
	private: System::Windows::Forms::PictureBox^  c6;
	private: System::Windows::Forms::PictureBox^  c7;
	private: System::Windows::Forms::PictureBox^  c8;
	private: System::Windows::Forms::PictureBox^  c9;
	private: System::Windows::Forms::PictureBox^  c10;
	private: System::Windows::Forms::PictureBox^  c11;
	private: System::Windows::Forms::PictureBox^  c12;
	private: System::Windows::Forms::PictureBox^  c13;
	private: System::Windows::Forms::PictureBox^  c14;
	private: System::Windows::Forms::PictureBox^  c15;
	private: System::Windows::Forms::PictureBox^  c16;
	private: System::Windows::Forms::PictureBox^  c17;
	private: System::Windows::Forms::PictureBox^  c18;
	private: System::Windows::Forms::PictureBox^  c19;
	private: System::Windows::Forms::PictureBox^  c20;
	private: System::Windows::Forms::PictureBox^  c21;
	private: System::Windows::Forms::PictureBox^  c22;
	private: System::Windows::Forms::PictureBox^  c23;
	private: System::Windows::Forms::PictureBox^  c24;
	private: System::Windows::Forms::PictureBox^  c25;
	private: System::Windows::Forms::PictureBox^  c26;
	private: System::Windows::Forms::PictureBox^  c27;
	private: System::Windows::Forms::PictureBox^  c28;
	private: System::Windows::Forms::PictureBox^  c29;
	private: System::Windows::Forms::PictureBox^  c30;
	private: System::Windows::Forms::PictureBox^  c31;
	private: System::Windows::Forms::PictureBox^  c32;
	private: System::Windows::Forms::PictureBox^  c33;
	private: System::Windows::Forms::PictureBox^  c34;
	private: System::Windows::Forms::PictureBox^  c35;
	private: System::Windows::Forms::PictureBox^  c36;
	private: System::Windows::Forms::PictureBox^  c37;
	private: System::Windows::Forms::PictureBox^  c38;
	private: System::Windows::Forms::PictureBox^  c39;
	private: System::Windows::Forms::PictureBox^  c40;
	private: System::Windows::Forms::PictureBox^  c41;
	private: System::Windows::Forms::PictureBox^  c42;
	private: System::Windows::Forms::PictureBox^  c43;
	private: System::Windows::Forms::PictureBox^  c44;
	private: System::Windows::Forms::PictureBox^  c45;
	private: System::Windows::Forms::PictureBox^  c46;
	private: System::Windows::Forms::PictureBox^  c47;
	private: System::Windows::Forms::PictureBox^  c48;
	private: System::Windows::Forms::PictureBox^  c49;
	private: System::Windows::Forms::PictureBox^  c50;
	private: System::Windows::Forms::PictureBox^  c51;
	private: System::Windows::Forms::PictureBox^  c52;

	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  putback;





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
			this->c1 = (gcnew System::Windows::Forms::PictureBox());
			this->c2 = (gcnew System::Windows::Forms::PictureBox());
			this->c3 = (gcnew System::Windows::Forms::PictureBox());
			this->c4 = (gcnew System::Windows::Forms::PictureBox());
			this->c5 = (gcnew System::Windows::Forms::PictureBox());
			this->c6 = (gcnew System::Windows::Forms::PictureBox());
			this->c7 = (gcnew System::Windows::Forms::PictureBox());
			this->c8 = (gcnew System::Windows::Forms::PictureBox());
			this->c9 = (gcnew System::Windows::Forms::PictureBox());
			this->c10 = (gcnew System::Windows::Forms::PictureBox());
			this->c11 = (gcnew System::Windows::Forms::PictureBox());
			this->c12 = (gcnew System::Windows::Forms::PictureBox());
			this->c13 = (gcnew System::Windows::Forms::PictureBox());
			this->c14 = (gcnew System::Windows::Forms::PictureBox());
			this->c15 = (gcnew System::Windows::Forms::PictureBox());
			this->c16 = (gcnew System::Windows::Forms::PictureBox());
			this->c17 = (gcnew System::Windows::Forms::PictureBox());
			this->c18 = (gcnew System::Windows::Forms::PictureBox());
			this->c19 = (gcnew System::Windows::Forms::PictureBox());
			this->c20 = (gcnew System::Windows::Forms::PictureBox());
			this->c21 = (gcnew System::Windows::Forms::PictureBox());
			this->c22 = (gcnew System::Windows::Forms::PictureBox());
			this->c23 = (gcnew System::Windows::Forms::PictureBox());
			this->c24 = (gcnew System::Windows::Forms::PictureBox());
			this->c25 = (gcnew System::Windows::Forms::PictureBox());
			this->c26 = (gcnew System::Windows::Forms::PictureBox());
			this->c27 = (gcnew System::Windows::Forms::PictureBox());
			this->c28 = (gcnew System::Windows::Forms::PictureBox());
			this->c29 = (gcnew System::Windows::Forms::PictureBox());
			this->c30 = (gcnew System::Windows::Forms::PictureBox());
			this->c31 = (gcnew System::Windows::Forms::PictureBox());
			this->c32 = (gcnew System::Windows::Forms::PictureBox());
			this->c33 = (gcnew System::Windows::Forms::PictureBox());
			this->c34 = (gcnew System::Windows::Forms::PictureBox());
			this->c35 = (gcnew System::Windows::Forms::PictureBox());
			this->c36 = (gcnew System::Windows::Forms::PictureBox());
			this->c37 = (gcnew System::Windows::Forms::PictureBox());
			this->c38 = (gcnew System::Windows::Forms::PictureBox());
			this->c39 = (gcnew System::Windows::Forms::PictureBox());
			this->c40 = (gcnew System::Windows::Forms::PictureBox());
			this->c41 = (gcnew System::Windows::Forms::PictureBox());
			this->c42 = (gcnew System::Windows::Forms::PictureBox());
			this->c43 = (gcnew System::Windows::Forms::PictureBox());
			this->c44 = (gcnew System::Windows::Forms::PictureBox());
			this->c45 = (gcnew System::Windows::Forms::PictureBox());
			this->c46 = (gcnew System::Windows::Forms::PictureBox());
			this->c47 = (gcnew System::Windows::Forms::PictureBox());
			this->c48 = (gcnew System::Windows::Forms::PictureBox());
			this->c49 = (gcnew System::Windows::Forms::PictureBox());
			this->c50 = (gcnew System::Windows::Forms::PictureBox());
			this->c51 = (gcnew System::Windows::Forms::PictureBox());
			this->c52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->putback = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->putback))->BeginInit();
			this->SuspendLayout();
			// 
			// c1
			// 
			this->c1->Location = System::Drawing::Point(12, 198);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(102, 137);
			this->c1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c1->TabIndex = 0;
			this->c1->TabStop = false;
			this->c1->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			this->c1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::carta_MouseMove);
			// 
			// c2
			// 
			this->c2->Location = System::Drawing::Point(132, 212);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(102, 137);
			this->c2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c2->TabIndex = 0;
			this->c2->TabStop = false;
			this->c2->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			this->c2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::carta_MouseMove);
			// 
			// c3
			// 
			this->c3->Location = System::Drawing::Point(132, 198);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(102, 137);
			this->c3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c3->TabIndex = 0;
			this->c3->TabStop = false;
			this->c3->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			this->c3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::carta_MouseMove);
			// 
			// c4
			// 
			this->c4->Location = System::Drawing::Point(250, 223);
			this->c4->Name = L"c4";
			this->c4->Size = System::Drawing::Size(102, 137);
			this->c4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c4->TabIndex = 0;
			this->c4->TabStop = false;
			this->c4->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c5
			// 
			this->c5->Location = System::Drawing::Point(250, 212);
			this->c5->Name = L"c5";
			this->c5->Size = System::Drawing::Size(102, 137);
			this->c5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c5->TabIndex = 0;
			this->c5->TabStop = false;
			this->c5->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c6
			// 
			this->c6->Location = System::Drawing::Point(250, 198);
			this->c6->Name = L"c6";
			this->c6->Size = System::Drawing::Size(102, 137);
			this->c6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c6->TabIndex = 0;
			this->c6->TabStop = false;
			this->c6->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c7
			// 
			this->c7->Location = System::Drawing::Point(370, 235);
			this->c7->Name = L"c7";
			this->c7->Size = System::Drawing::Size(102, 137);
			this->c7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c7->TabIndex = 0;
			this->c7->TabStop = false;
			this->c7->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c8
			// 
			this->c8->Location = System::Drawing::Point(370, 223);
			this->c8->Name = L"c8";
			this->c8->Size = System::Drawing::Size(102, 137);
			this->c8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c8->TabIndex = 0;
			this->c8->TabStop = false;
			this->c8->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c9
			// 
			this->c9->Location = System::Drawing::Point(370, 212);
			this->c9->Name = L"c9";
			this->c9->Size = System::Drawing::Size(102, 137);
			this->c9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c9->TabIndex = 0;
			this->c9->TabStop = false;
			this->c9->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c10
			// 
			this->c10->Location = System::Drawing::Point(370, 198);
			this->c10->Name = L"c10";
			this->c10->Size = System::Drawing::Size(102, 137);
			this->c10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c10->TabIndex = 0;
			this->c10->TabStop = false;
			this->c10->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c11
			// 
			this->c11->Location = System::Drawing::Point(490, 251);
			this->c11->Name = L"c11";
			this->c11->Size = System::Drawing::Size(102, 137);
			this->c11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c11->TabIndex = 0;
			this->c11->TabStop = false;
			this->c11->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c12
			// 
			this->c12->Location = System::Drawing::Point(490, 235);
			this->c12->Name = L"c12";
			this->c12->Size = System::Drawing::Size(102, 137);
			this->c12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c12->TabIndex = 0;
			this->c12->TabStop = false;
			this->c12->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c13
			// 
			this->c13->Location = System::Drawing::Point(490, 223);
			this->c13->Name = L"c13";
			this->c13->Size = System::Drawing::Size(102, 137);
			this->c13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c13->TabIndex = 0;
			this->c13->TabStop = false;
			this->c13->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c14
			// 
			this->c14->Location = System::Drawing::Point(490, 212);
			this->c14->Name = L"c14";
			this->c14->Size = System::Drawing::Size(102, 137);
			this->c14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c14->TabIndex = 0;
			this->c14->TabStop = false;
			this->c14->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c15
			// 
			this->c15->Location = System::Drawing::Point(490, 198);
			this->c15->Name = L"c15";
			this->c15->Size = System::Drawing::Size(102, 137);
			this->c15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c15->TabIndex = 0;
			this->c15->TabStop = false;
			this->c15->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c16
			// 
			this->c16->Location = System::Drawing::Point(619, 267);
			this->c16->Name = L"c16";
			this->c16->Size = System::Drawing::Size(102, 137);
			this->c16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c16->TabIndex = 0;
			this->c16->TabStop = false;
			this->c16->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c17
			// 
			this->c17->Location = System::Drawing::Point(619, 251);
			this->c17->Name = L"c17";
			this->c17->Size = System::Drawing::Size(102, 137);
			this->c17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c17->TabIndex = 0;
			this->c17->TabStop = false;
			this->c17->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c18
			// 
			this->c18->Location = System::Drawing::Point(619, 235);
			this->c18->Name = L"c18";
			this->c18->Size = System::Drawing::Size(102, 137);
			this->c18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c18->TabIndex = 0;
			this->c18->TabStop = false;
			this->c18->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c19
			// 
			this->c19->Location = System::Drawing::Point(619, 223);
			this->c19->Name = L"c19";
			this->c19->Size = System::Drawing::Size(102, 137);
			this->c19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c19->TabIndex = 0;
			this->c19->TabStop = false;
			this->c19->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c20
			// 
			this->c20->Location = System::Drawing::Point(619, 212);
			this->c20->Name = L"c20";
			this->c20->Size = System::Drawing::Size(102, 137);
			this->c20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c20->TabIndex = 0;
			this->c20->TabStop = false;
			this->c20->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c21
			// 
			this->c21->Location = System::Drawing::Point(619, 198);
			this->c21->Name = L"c21";
			this->c21->Size = System::Drawing::Size(102, 137);
			this->c21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c21->TabIndex = 0;
			this->c21->TabStop = false;
			this->c21->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c22
			// 
			this->c22->Location = System::Drawing::Point(738, 281);
			this->c22->Name = L"c22";
			this->c22->Size = System::Drawing::Size(102, 137);
			this->c22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c22->TabIndex = 0;
			this->c22->TabStop = false;
			this->c22->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c23
			// 
			this->c23->Location = System::Drawing::Point(738, 267);
			this->c23->Name = L"c23";
			this->c23->Size = System::Drawing::Size(102, 137);
			this->c23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c23->TabIndex = 0;
			this->c23->TabStop = false;
			this->c23->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c24
			// 
			this->c24->Location = System::Drawing::Point(738, 251);
			this->c24->Name = L"c24";
			this->c24->Size = System::Drawing::Size(102, 137);
			this->c24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c24->TabIndex = 0;
			this->c24->TabStop = false;
			this->c24->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c25
			// 
			this->c25->Location = System::Drawing::Point(738, 235);
			this->c25->Name = L"c25";
			this->c25->Size = System::Drawing::Size(102, 137);
			this->c25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c25->TabIndex = 0;
			this->c25->TabStop = false;
			this->c25->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c26
			// 
			this->c26->Location = System::Drawing::Point(738, 223);
			this->c26->Name = L"c26";
			this->c26->Size = System::Drawing::Size(102, 137);
			this->c26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c26->TabIndex = 0;
			this->c26->TabStop = false;
			this->c26->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c27
			// 
			this->c27->Location = System::Drawing::Point(738, 212);
			this->c27->Name = L"c27";
			this->c27->Size = System::Drawing::Size(102, 137);
			this->c27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c27->TabIndex = 0;
			this->c27->TabStop = false;
			this->c27->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c28
			// 
			this->c28->Location = System::Drawing::Point(738, 198);
			this->c28->Name = L"c28";
			this->c28->Size = System::Drawing::Size(102, 137);
			this->c28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c28->TabIndex = 0;
			this->c28->TabStop = false;
			this->c28->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c29
			// 
			this->c29->Location = System::Drawing::Point(12, 12);
			this->c29->Name = L"c29";
			this->c29->Size = System::Drawing::Size(102, 137);
			this->c29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c29->TabIndex = 0;
			this->c29->TabStop = false;
			this->c29->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c30
			// 
			this->c30->Location = System::Drawing::Point(12, 12);
			this->c30->Name = L"c30";
			this->c30->Size = System::Drawing::Size(102, 137);
			this->c30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c30->TabIndex = 0;
			this->c30->TabStop = false;
			this->c30->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c31
			// 
			this->c31->Location = System::Drawing::Point(12, 12);
			this->c31->Name = L"c31";
			this->c31->Size = System::Drawing::Size(102, 137);
			this->c31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c31->TabIndex = 0;
			this->c31->TabStop = false;
			this->c31->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c32
			// 
			this->c32->Location = System::Drawing::Point(12, 12);
			this->c32->Name = L"c32";
			this->c32->Size = System::Drawing::Size(102, 137);
			this->c32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c32->TabIndex = 0;
			this->c32->TabStop = false;
			this->c32->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c33
			// 
			this->c33->Location = System::Drawing::Point(12, 12);
			this->c33->Name = L"c33";
			this->c33->Size = System::Drawing::Size(102, 137);
			this->c33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c33->TabIndex = 0;
			this->c33->TabStop = false;
			this->c33->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c34
			// 
			this->c34->Location = System::Drawing::Point(12, 12);
			this->c34->Name = L"c34";
			this->c34->Size = System::Drawing::Size(102, 137);
			this->c34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c34->TabIndex = 0;
			this->c34->TabStop = false;
			this->c34->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c35
			// 
			this->c35->Location = System::Drawing::Point(12, 12);
			this->c35->Name = L"c35";
			this->c35->Size = System::Drawing::Size(102, 137);
			this->c35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c35->TabIndex = 0;
			this->c35->TabStop = false;
			this->c35->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c36
			// 
			this->c36->Location = System::Drawing::Point(12, 12);
			this->c36->Name = L"c36";
			this->c36->Size = System::Drawing::Size(102, 137);
			this->c36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c36->TabIndex = 0;
			this->c36->TabStop = false;
			this->c36->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c37
			// 
			this->c37->Location = System::Drawing::Point(12, 12);
			this->c37->Name = L"c37";
			this->c37->Size = System::Drawing::Size(102, 137);
			this->c37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c37->TabIndex = 0;
			this->c37->TabStop = false;
			this->c37->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c38
			// 
			this->c38->Location = System::Drawing::Point(12, 12);
			this->c38->Name = L"c38";
			this->c38->Size = System::Drawing::Size(102, 137);
			this->c38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c38->TabIndex = 0;
			this->c38->TabStop = false;
			this->c38->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c39
			// 
			this->c39->Location = System::Drawing::Point(12, 12);
			this->c39->Name = L"c39";
			this->c39->Size = System::Drawing::Size(102, 137);
			this->c39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c39->TabIndex = 0;
			this->c39->TabStop = false;
			this->c39->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c40
			// 
			this->c40->Location = System::Drawing::Point(12, 12);
			this->c40->Name = L"c40";
			this->c40->Size = System::Drawing::Size(102, 137);
			this->c40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c40->TabIndex = 0;
			this->c40->TabStop = false;
			this->c40->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c41
			// 
			this->c41->Location = System::Drawing::Point(12, 12);
			this->c41->Name = L"c41";
			this->c41->Size = System::Drawing::Size(102, 137);
			this->c41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c41->TabIndex = 0;
			this->c41->TabStop = false;
			this->c41->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c42
			// 
			this->c42->Location = System::Drawing::Point(12, 12);
			this->c42->Name = L"c42";
			this->c42->Size = System::Drawing::Size(102, 137);
			this->c42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c42->TabIndex = 0;
			this->c42->TabStop = false;
			this->c42->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c43
			// 
			this->c43->Location = System::Drawing::Point(12, 12);
			this->c43->Name = L"c43";
			this->c43->Size = System::Drawing::Size(102, 137);
			this->c43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c43->TabIndex = 0;
			this->c43->TabStop = false;
			this->c43->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c44
			// 
			this->c44->Location = System::Drawing::Point(12, 12);
			this->c44->Name = L"c44";
			this->c44->Size = System::Drawing::Size(102, 137);
			this->c44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c44->TabIndex = 0;
			this->c44->TabStop = false;
			this->c44->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c45
			// 
			this->c45->Location = System::Drawing::Point(12, 12);
			this->c45->Name = L"c45";
			this->c45->Size = System::Drawing::Size(102, 137);
			this->c45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c45->TabIndex = 0;
			this->c45->TabStop = false;
			this->c45->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c46
			// 
			this->c46->Location = System::Drawing::Point(12, 12);
			this->c46->Name = L"c46";
			this->c46->Size = System::Drawing::Size(102, 137);
			this->c46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c46->TabIndex = 0;
			this->c46->TabStop = false;
			this->c46->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c47
			// 
			this->c47->Location = System::Drawing::Point(12, 12);
			this->c47->Name = L"c47";
			this->c47->Size = System::Drawing::Size(102, 137);
			this->c47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c47->TabIndex = 0;
			this->c47->TabStop = false;
			this->c47->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c48
			// 
			this->c48->Location = System::Drawing::Point(12, 12);
			this->c48->Name = L"c48";
			this->c48->Size = System::Drawing::Size(102, 137);
			this->c48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c48->TabIndex = 0;
			this->c48->TabStop = false;
			this->c48->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c49
			// 
			this->c49->Location = System::Drawing::Point(12, 12);
			this->c49->Name = L"c49";
			this->c49->Size = System::Drawing::Size(102, 137);
			this->c49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c49->TabIndex = 0;
			this->c49->TabStop = false;
			this->c49->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c50
			// 
			this->c50->Location = System::Drawing::Point(12, 12);
			this->c50->Name = L"c50";
			this->c50->Size = System::Drawing::Size(102, 137);
			this->c50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c50->TabIndex = 0;
			this->c50->TabStop = false;
			this->c50->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c51
			// 
			this->c51->Location = System::Drawing::Point(12, 12);
			this->c51->Name = L"c51";
			this->c51->Size = System::Drawing::Size(102, 137);
			this->c51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c51->TabIndex = 0;
			this->c51->TabStop = false;
			this->c51->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// c52
			// 
			this->c52->Location = System::Drawing::Point(12, 12);
			this->c52->Name = L"c52";
			this->c52->Size = System::Drawing::Size(102, 137);
			this->c52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c52->TabIndex = 0;
			this->c52->TabStop = false;
			this->c52->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Location = System::Drawing::Point(132, 198);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(102, 137);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 0;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox31->Location = System::Drawing::Point(370, 12);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(102, 137);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 0;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox32->Location = System::Drawing::Point(490, 12);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(102, 137);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 0;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox33->Location = System::Drawing::Point(618, 12);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(102, 137);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 0;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox34->Location = System::Drawing::Point(738, 12);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(102, 137);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 0;
			this->pictureBox34->TabStop = false;
			// 
			// putback
			// 
			this->putback->Location = System::Drawing::Point(250, 12);
			this->putback->Name = L"putback";
			this->putback->Size = System::Drawing::Size(102, 137);
			this->putback->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->putback->TabIndex = 0;
			this->putback->TabStop = false;
			this->putback->Click += gcnew System::EventHandler(this, &Form1::carta_Click);
			this->putback->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::carta_MouseMove);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Green;
			this->ClientSize = System::Drawing::Size(855, 457);
			this->Controls->Add(this->putback);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->c3);
			this->Controls->Add(this->c4);
			this->Controls->Add(this->c5);
			this->Controls->Add(this->c6);
			this->Controls->Add(this->c7);
			this->Controls->Add(this->c8);
			this->Controls->Add(this->c9);
			this->Controls->Add(this->c10);
			this->Controls->Add(this->c11);
			this->Controls->Add(this->c12);
			this->Controls->Add(this->c13);
			this->Controls->Add(this->c14);
			this->Controls->Add(this->c15);
			this->Controls->Add(this->c16);
			this->Controls->Add(this->c17);
			this->Controls->Add(this->c18);
			this->Controls->Add(this->c19);
			this->Controls->Add(this->c20);
			this->Controls->Add(this->c21);
			this->Controls->Add(this->c22);
			this->Controls->Add(this->c23);
			this->Controls->Add(this->c24);
			this->Controls->Add(this->c25);
			this->Controls->Add(this->c26);
			this->Controls->Add(this->c27);
			this->Controls->Add(this->c28);
			this->Controls->Add(this->c37);
			this->Controls->Add(this->c38);
			this->Controls->Add(this->c39);
			this->Controls->Add(this->c40);
			this->Controls->Add(this->c41);
			this->Controls->Add(this->c42);
			this->Controls->Add(this->c43);
			this->Controls->Add(this->c44);
			this->Controls->Add(this->c45);
			this->Controls->Add(this->c46);
			this->Controls->Add(this->c47);
			this->Controls->Add(this->c48);
			this->Controls->Add(this->c49);
			this->Controls->Add(this->c50);
			this->Controls->Add(this->c51);
			this->Controls->Add(this->c52);
			this->Controls->Add(this->c35);
			this->Controls->Add(this->c34);
			this->Controls->Add(this->c33);
			this->Controls->Add(this->c32);
			this->Controls->Add(this->c31);
			this->Controls->Add(this->c30);
			this->Controls->Add(this->c29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->c36);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Solitario";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->c52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->putback))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 String^ cc1 = gcnew String(J.r1.Pop(1,0,"c1").c_str());
				 String^ cc2 = gcnew String(J.r2.Pop(1,0,"c2").c_str());
				 String^ cc3 = gcnew String(J.r2.Pop(2,1,"c3").c_str());
				 String^ cc4 = gcnew String(J.r3.Pop(1,0,"c4").c_str());
				 String^ cc5 = gcnew String(J.r3.Pop(2,1,"c5").c_str());
				 String^ cc6 = gcnew String(J.r3.Pop(3,1,"c6").c_str());
				 String^ cc7 = gcnew String(J.r4.Pop(1,0,"c7").c_str());
				 String^ cc8 = gcnew String(J.r4.Pop(2,1,"c8").c_str());
				 String^ cc9 = gcnew String(J.r4.Pop(3,1,"c9").c_str());
				 String^ cc10= gcnew String(J.r4.Pop(4,1,"c10").c_str());
				 String^ cc11= gcnew String(J.r5.Pop(1,0,"c11").c_str());
				 String^ cc12= gcnew String(J.r5.Pop(2,1,"c12").c_str());
				 String^ cc13= gcnew String(J.r5.Pop(3,1,"c13").c_str());
				 String^ cc14= gcnew String(J.r5.Pop(4,1,"c14").c_str());
				 String^ cc15= gcnew String(J.r5.Pop(5,1,"c15").c_str());
				 String^ cc16= gcnew String(J.r6.Pop(1,0,"c16").c_str());
				 String^ cc17= gcnew String(J.r6.Pop(2,1,"c17").c_str());
				 String^ cc18= gcnew String(J.r6.Pop(3,1,"c18").c_str());
				 String^ cc19= gcnew String(J.r6.Pop(4,1,"c19").c_str());
				 String^ cc20= gcnew String(J.r6.Pop(5,1,"c20").c_str());
				 String^ cc21= gcnew String(J.r6.Pop(6,1,"c21").c_str());
				 String^ cc22= gcnew String(J.r7.Pop(1,0,"c22").c_str());
				 String^ cc23= gcnew String(J.r7.Pop(2,1,"c23").c_str());
				 String^ cc24= gcnew String(J.r7.Pop(3,1,"c24").c_str());
				 String^ cc25= gcnew String(J.r7.Pop(4,1,"c25").c_str());
				 String^ cc26= gcnew String(J.r7.Pop(5,1,"c26").c_str());
				 String^ cc27= gcnew String(J.r7.Pop(6,1,"c27").c_str());
				 String^ cc28= gcnew String(J.r7.Pop(7,1,"c28").c_str());
				 String^ cback= gcnew String(J.barajaccc.inicio->dirback.c_str());
				 String^ putb= gcnew String(J.dirx.c_str());
				

				 c1->ImageLocation = cc1;
				 c2->ImageLocation = cc2;
				 c3->ImageLocation = cc3;
				 c4->ImageLocation = cc4;
				 c5->ImageLocation = cc5;
				 c6->ImageLocation = cc6;
				 c7->ImageLocation = cc7;
				 c8->ImageLocation = cc8;
				 c9->ImageLocation = cc9;
				 c10->ImageLocation = cc10;
				 c11->ImageLocation = cc11;
				 c12->ImageLocation = cc12;
				 c13->ImageLocation = cc13;
				 c14->ImageLocation = cc14;
				 c15->ImageLocation = cc15;
				 c16->ImageLocation = cc16;
				 c17->ImageLocation = cc17;
				 c18->ImageLocation = cc18;
				 c19->ImageLocation = cc19;
				 c20->ImageLocation = cc20;
				 c21->ImageLocation = cc21;
				 c22->ImageLocation = cc22;
				 c23->ImageLocation = cc23;
				 c24->ImageLocation = cc24;
				 c25->ImageLocation = cc25;
				 c26->ImageLocation = cc26;
				 c27->ImageLocation = cc27;
				 c28->ImageLocation = cc28;
				 J.barajaccc.Nombres();
				 c29->ImageLocation = cback;
				 c30->ImageLocation = cback;
				 c31->ImageLocation = cback;
				 c32->ImageLocation = cback;
				 c33->ImageLocation = cback;
				 c34->ImageLocation = cback;
				 c35->ImageLocation = cback;
				 c36->ImageLocation = cback;
				 c37->ImageLocation = cback;
				 c38->ImageLocation = cback;
				 c39->ImageLocation = cback;
				 c40->ImageLocation = cback;
				 c41->ImageLocation = cback;
				 c42->ImageLocation = cback;
				 c43->ImageLocation = cback;
				 c44->ImageLocation = cback;
				 c45->ImageLocation = cback;
				 c46->ImageLocation = cback;
				 c47->ImageLocation = cback;
				 c48->ImageLocation = cback;
				 c49->ImageLocation = cback;
				 c50->ImageLocation = cback;
				 c51->ImageLocation = cback;
				 c52->ImageLocation = cback;
				 putback->ImageLocation = putb;

				 putback->Visible = false;
			 }

private: System::Void carta_Click(System::Object^  sender, System::EventArgs^  e) {
			 PictureBox ^ c = (PictureBox^) sender;
			 
			 //Circular Arriba

			 //Circular Abajo
			 
			 if(c == c29){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c29->ImageLocation = nombre;	 
				this->c29->Location = System::Drawing::Point(130, 12);
				this->c29->BringToFront();
			 }else if(c == c30){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c30->ImageLocation = nombre;	 
				this->c30->Location = System::Drawing::Point(130, 12);
				this->c30->BringToFront();
			 }else if(c == c31){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c31->ImageLocation = nombre;	 
				this->c31->Location = System::Drawing::Point(130, 12);
				this->c31->BringToFront();
			 }else if(c == c32){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c32->ImageLocation = nombre;	 
				this->c32->Location = System::Drawing::Point(130, 12);
				this->c32->BringToFront();
			 }else if(c == c33){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c33->ImageLocation = nombre;	 
				this->c33->Location = System::Drawing::Point(130, 12);
				this->c33->BringToFront();
			 }else if(c == c34){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c34->ImageLocation = nombre;	 
				this->c34->Location = System::Drawing::Point(130, 12);
				this->c34->BringToFront();
			 }else if(c == c35){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c35->ImageLocation = nombre;	 
				this->c35->Location = System::Drawing::Point(130, 12);
				this->c35->BringToFront();
			 }else if(c == c36){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c36->ImageLocation = nombre;	 
				this->c36->Location = System::Drawing::Point(130, 12);
				this->c36->BringToFront();
				putback->Visible = true;
			 }else if(c == c37){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c37->ImageLocation = nombre;	 
				this->c37->Location = System::Drawing::Point(130, 12);
				this->c37->BringToFront();
			 }else if(c == c38){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c38->ImageLocation = nombre;	 
				this->c38->Location = System::Drawing::Point(130, 12);
				this->c38->BringToFront();
			 }else if(c == c39){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c39->ImageLocation = nombre;	 
				this->c39->Location = System::Drawing::Point(130, 12);
				this->c39->BringToFront();
			 }else if(c == c40){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c40->ImageLocation = nombre;	 
				this->c40->Location = System::Drawing::Point(130, 12);
				this->c40->BringToFront();
			 }else if(c == c41){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c41->ImageLocation = nombre;	 
				this->c41->Location = System::Drawing::Point(130, 12);
				this->c41->BringToFront();
			 }else if(c == c42){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c42->ImageLocation = nombre;	 
				this->c42->Location = System::Drawing::Point(130, 12);
				this->c42->BringToFront();
			 }else if(c == c43){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c43->ImageLocation = nombre;	 
				this->c43->Location = System::Drawing::Point(130, 12);
				this->c43->BringToFront();
			 }else if(c == c44){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c44->ImageLocation = nombre;	 
				this->c44->Location = System::Drawing::Point(130, 12);
				this->c44->BringToFront();
			 }else if(c == c45){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c45->ImageLocation = nombre;	 
				this->c45->Location = System::Drawing::Point(130, 12);
				this->c45->BringToFront();
			 }else if(c == c46){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c46->ImageLocation = nombre;	 
				this->c46->Location = System::Drawing::Point(130, 12);
				this->c46->BringToFront();
			 }else if(c == c47){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c47->ImageLocation = nombre;	 
				this->c47->Location = System::Drawing::Point(130, 12);
				this->c47->BringToFront();
			 }else if(c == c48){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c48->ImageLocation = nombre;	 
				this->c48->Location = System::Drawing::Point(130, 12);
				this->c48->BringToFront();
			 }else if(c == c49){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c49->ImageLocation = nombre;	 
				this->c49->Location = System::Drawing::Point(130, 12);
				this->c49->BringToFront();
			 }else if(c == c50){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c50->ImageLocation = nombre;	 
				this->c50->Location = System::Drawing::Point(130, 12);
				this->c50->BringToFront();
			 }else if(c == c51){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c51->ImageLocation = nombre;	 
				this->c51->Location = System::Drawing::Point(130, 12);
				this->c51->BringToFront();
			 }else if(c == c52){
				String^ nombre= gcnew String(J.barajaccc.newGetDirMove().c_str());
				c52->ImageLocation = nombre;	 
				this->c52->Location = System::Drawing::Point(130, 12);
				this->c52->BringToFront();
			 }


			 //Pila Arriba

			 //Pila Abajo



			 /*
			 int x = c->Location.X;
			 int y = c->Location.Y;
			 */


			 if (c==putback)
			 {
				String^ bk= gcnew String(J.barajaccc.inicio->dirback.c_str());
				c29->ImageLocation = bk;	 
				this->c29->Location = System::Drawing::Point(12, 12);
				c30->ImageLocation = bk;	 
				this->c30->Location = System::Drawing::Point(12, 12);
				c31->ImageLocation = bk;	 
				this->c31->Location = System::Drawing::Point(12, 12);
				c32->ImageLocation = bk;	 
				this->c32->Location = System::Drawing::Point(12, 12);
				c33->ImageLocation = bk;	 
				this->c33->Location = System::Drawing::Point(12, 12);
				c34->ImageLocation = bk;	 
				this->c34->Location = System::Drawing::Point(12, 12);
				c35->ImageLocation = bk;	 
				this->c35->Location = System::Drawing::Point(12, 12);
				c36->ImageLocation = bk;	 
				this->c36->Location = System::Drawing::Point(12, 12);
				c37->ImageLocation = bk;	 
				this->c37->Location = System::Drawing::Point(12, 12);
				c38->ImageLocation = bk;	 
				this->c38->Location = System::Drawing::Point(12, 12);
				c39->ImageLocation = bk;	 
				this->c39->Location = System::Drawing::Point(12, 12);
				c40->ImageLocation = bk;	 
				this->c40->Location = System::Drawing::Point(12, 12);
				c41->ImageLocation = bk;	 
				this->c41->Location = System::Drawing::Point(12, 12);
				c42->ImageLocation = bk;	 
				this->c42->Location = System::Drawing::Point(12, 12);
				c43->ImageLocation = bk;	 
				this->c43->Location = System::Drawing::Point(12, 12);
				c44->ImageLocation = bk;	 
				this->c44->Location = System::Drawing::Point(12, 12);
				c45->ImageLocation = bk;	 
				this->c45->Location = System::Drawing::Point(12, 12);
				c46->ImageLocation = bk;	 
				this->c46->Location = System::Drawing::Point(12, 12);
				c47->ImageLocation = bk;	 
				this->c47->Location = System::Drawing::Point(12, 12);
				c48->ImageLocation = bk;	 
				this->c48->Location = System::Drawing::Point(12, 12);
				c49->ImageLocation = bk;	 
				this->c49->Location = System::Drawing::Point(12, 12);
				c50->ImageLocation = bk;	 
				this->c50->Location = System::Drawing::Point(12, 12);
				c51->ImageLocation = bk;	 
				this->c51->Location = System::Drawing::Point(12, 12);
				c52->ImageLocation = bk;	 
				this->c52->Location = System::Drawing::Point(12, 12);
				
				this->c36->SendToBack();
				this->putback->Visible=false;
			 }

			 

			 if ((c==c1) && (J.r1.Tope->valor==1) && (J.r1.Tope->grupo==1))
			 {
			 this->c1->Location = System::Drawing::Point(370, 12);
			 }
			 if ((c==c2) && (J.r2.Tope->valor==1) && (J.r2.Tope->grupo==1))
			 {
			 this->c2->Location = System::Drawing::Point(370, 12);
			 }
			 if ((c==c4) && (J.r3.Tope->valor==1) && (J.r3.Tope->grupo==1))
			 {
			 this->c4->Location = System::Drawing::Point(370, 12);
			 }
			 if ((c==c7) && (J.r4.Tope->valor==1) && (J.r4.Tope->grupo==1))
			 {
			 this->c7->Location = System::Drawing::Point(370, 12);
			 }
			 if ((c==c11) && (J.r5.Tope->valor==1) && (J.r5.Tope->grupo==1))
			 {
			 this->c11->Location = System::Drawing::Point(370, 12);
			 }
			 if ((c==c16) && (J.r6.Tope->valor==1) && (J.r6.Tope->grupo==1))
			 {
			 this->c16->Location = System::Drawing::Point(370, 12);
			 }
			 if ((c==c22) && (J.r7.Tope->valor==1) && (J.r7.Tope->grupo==1))
			 {
			 this->c22->Location = System::Drawing::Point(370, 12);
			 }

			  if ((c==c1) && (J.r1.Tope->valor==1) && (J.r1.Tope->grupo==2))
			 {
			 this->c1->Location = System::Drawing::Point(490, 12);
			 }
			 if ((c==c2) && (J.r2.Tope->valor==1) && (J.r2.Tope->grupo==2))
			 {
			 this->c2->Location = System::Drawing::Point(490, 12);
			 }
			 if ((c==c4) && (J.r3.Tope->valor==1) && (J.r3.Tope->grupo==2))
			 {
			 this->c4->Location = System::Drawing::Point(490, 12);
			 }
			 if ((c==c7) && (J.r4.Tope->valor==1) && (J.r4.Tope->grupo==2))
			 {
			 this->c7->Location = System::Drawing::Point(490, 12);
			 }
			 if ((c==c11) && (J.r5.Tope->valor==1) && (J.r5.Tope->grupo==2))
			 {
			 this->c11->Location = System::Drawing::Point(490, 12);
			 }
			 if ((c==c16) && (J.r6.Tope->valor==1) && (J.r6.Tope->grupo==2))
			 {
			 this->c16->Location = System::Drawing::Point(490, 12);
			 }
			 if ((c==c22) && (J.r7.Tope->valor==1) && (J.r7.Tope->grupo==2))
			 {
			 this->c22->Location = System::Drawing::Point(490, 12);
			 }

			  if ((c==c1) && (J.r1.Tope->valor==1) && (J.r1.Tope->grupo==3))
			 {
			 this->c1->Location = System::Drawing::Point(620, 12);
			 }
			 if ((c==c2) && (J.r2.Tope->valor==1) && (J.r2.Tope->grupo==3))
			 {
			 this->c2->Location = System::Drawing::Point(620, 12);
			 }
			 if ((c==c4) && (J.r3.Tope->valor==1) && (J.r3.Tope->grupo==3))
			 {
			 this->c4->Location = System::Drawing::Point(620, 12);
			 }
			 if ((c==c7) && (J.r4.Tope->valor==1) && (J.r4.Tope->grupo==3))
			 {
			 this->c7->Location = System::Drawing::Point(620, 12);
			 }
			 if ((c==c11) && (J.r5.Tope->valor==1) && (J.r5.Tope->grupo==3))
			 {
			 this->c11->Location = System::Drawing::Point(620, 12);
			 }
			 if ((c==c16) && (J.r6.Tope->valor==1) && (J.r6.Tope->grupo==3))
			 {
			 this->c16->Location = System::Drawing::Point(620, 12);
			 }
			 if ((c==c22) && (J.r7.Tope->valor==1) && (J.r7.Tope->grupo==3))
			 {
			 this->c22->Location = System::Drawing::Point(620, 12);
			 }

			 if ((c==c1) && (J.r1.Tope->valor==1) && (J.r1.Tope->grupo==4))
			 {
			 this->c1->Location = System::Drawing::Point(740, 12);
			 }
			 if ((c==c2) && (J.r2.Tope->valor==1) && (J.r2.Tope->grupo==4))
			 {
			 this->c2->Location = System::Drawing::Point(740, 12);
			 }
			 if ((c==c4) && (J.r3.Tope->valor==1) && (J.r3.Tope->grupo==4))
			 {
			 this->c4->Location = System::Drawing::Point(740, 12);
			 }
			 if ((c==c7) && (J.r4.Tope->valor==1) && (J.r4.Tope->grupo==4))
			 {
			 this->c7->Location = System::Drawing::Point(740, 12);
			 }
			 if ((c==c11) && (J.r5.Tope->valor==1) && (J.r5.Tope->grupo==4))
			 {
			 this->c11->Location = System::Drawing::Point(740, 12);
			 }
			 if ((c==c16) && (J.r6.Tope->valor==1) && (J.r6.Tope->grupo==4))
			 {
			 this->c16->Location = System::Drawing::Point(740, 12);
			 }
			 if ((c==c22) && (J.r7.Tope->valor==1) && (J.r7.Tope->grupo==4))
			 {
			 this->c22->Location = System::Drawing::Point(740, 12);
			 }



			 if (c==c3) 
			 {
				String^ kx= gcnew String(J.r2.getDire(1).c_str());
				c3->ImageLocation = kx;	
			 }
			 if (c==c5) 
			 {
				String^ kx= gcnew String(J.r3.getDire(1).c_str());
				c5->ImageLocation = kx;	
			 }
			 if (c==c8) 
			 {
				String^ kx= gcnew String(J.r4.getDire(1).c_str());
				c8->ImageLocation = kx;	
			 }
			 if (c==c12) 
			 {
				String^ kx= gcnew String(J.r5.getDire(1).c_str());
				c12->ImageLocation = kx;	
			 }
			 if (c==c17) 
			 {
				String^ kx= gcnew String(J.r6.getDire(1).c_str());
				c17->ImageLocation = kx;	
			 }
			 if (c==c23) 
			 {
				String^ kx= gcnew String(J.r7.getDire(1).c_str());
				c23->ImageLocation = kx;	
			 }
		 }

		 
private: System::Void carta_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		 }

};
}

