#pragma once

namespace areadeuncirculo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  bcalcular;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbase;
	private: System::Windows::Forms::TextBox^  tarea;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  taltura;


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
			this->bcalcular = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbase = (gcnew System::Windows::Forms::TextBox());
			this->tarea = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->taltura = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// bcalcular
			// 
			this->bcalcular->Location = System::Drawing::Point(126, 234);
			this->bcalcular->Name = L"bcalcular";
			this->bcalcular->Size = System::Drawing::Size(90, 40);
			this->bcalcular->TabIndex = 0;
			this->bcalcular->Text = L"calcular";
			this->bcalcular->UseVisualStyleBackColor = true;
			this->bcalcular->Click += gcnew System::EventHandler(this, &Form1::bcalcular_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"base";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// tbase
			// 
			this->tbase->Location = System::Drawing::Point(116, 31);
			this->tbase->Name = L"tbase";
			this->tbase->Size = System::Drawing::Size(100, 20);
			this->tbase->TabIndex = 2;
			// 
			// tarea
			// 
			this->tarea->Location = System::Drawing::Point(116, 133);
			this->tarea->Name = L"tarea";
			this->tarea->Size = System::Drawing::Size(100, 20);
			this->tarea->TabIndex = 3;
			this->tarea->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"altura";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"area";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// taltura
			// 
			this->taltura->Location = System::Drawing::Point(116, 84);
			this->taltura->Name = L"taltura";
			this->taltura->Size = System::Drawing::Size(100, 20);
			this->taltura->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 299);
			this->Controls->Add(this->taltura);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tarea);
			this->Controls->Add(this->tbase);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bcalcular);
			this->Name = L"Form1";
			this->Text = L"arearectangulo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bcalcular_Click(System::Object^  sender, System::EventArgs^  e) {
			 int base, altura, area;
			 base = System::Convert::ToInt32(tbase->Text);
			 altura = System::Convert::ToInt32(taltura->Text);
			 area = base * altura;
			 tarea->Text=area.ToString();
		 }
};
}

