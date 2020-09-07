#include<iostream>
#include <cstdlib>
#pragma once


namespace task1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;




	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X  =";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(11, 117);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(356, 92);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор точности";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(240, 52);
			this->radioButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(89, 21);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->Text = L"0.000001";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(240, 27);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(81, 21);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->Text = L"0.00001";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(5, 27);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(49, 21);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0.1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(123, 52);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(73, 21);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->Text = L"0.0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(5, 52);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(57, 21);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"0.01";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(123, 27);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(65, 21);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"0.001";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(11, 47);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(356, 55);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод значения X (-13 <= X <= 20)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(64, 21);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(275, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"exp(x) = 1 + x/1! +x^2/2! + x^3/3! + ...";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 214);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(356, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Расчёт exp(x)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(-7, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Результаты расчёта:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Исходное значение =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Точность =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Точное значение exp(x) =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 375);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Число слагаемых =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 400);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Сумма ряда exp(x) = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(227, 304);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(227, 327);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(227, 352);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(227, 375);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 17);
			this->label12->TabIndex = 14;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(227, 400);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 17);
			this->label13->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 428);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 28);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 476);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Рассчёт exp(x)";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double	tochnost = 0.1;
	String^ format = "0.00";
	String^ format1 = "0.0";
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
		   double x,ch,n,sum,slag,cnt,col;
		   
		  /* int cnt,n;
		   double x;
		   x ;
		   double slagaemoe(int n, double x) {
			   double x1=(n, x) * x / n;
			   return x1;
		   }
		   double sum(double tochnost, double x) {
			   double slag;
			   double sum;
			   sum = 1;
			   cnt = 1;
			   while (Math::Abs(slag) > tochnost);
			   slag = slagaemoe(cnt, x);
			   sum += slag;
			   cnt++;
			   return sum;
		   }*/
		   void clear() {
			   this->label9->Text="";
			   this->label10->Text="";
			   this->label11->Text="";
			   this->label12->Text="";
			   this->label13->Text="";
			   radioButton1->Enabled = true;
			   radioButton2->Enabled = true;
			   radioButton3->Enabled = true;
			   radioButton4->Enabled = true;
			   radioButton5->Enabled = true;
			   radioButton6->Enabled = true;
			   //tochnost = 0.1;
		}
		   double a;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text != "-" && textBox1->Text != "") 
		{
			a = Convert::ToDouble(textBox1->Text);
			if (a < -11)
			{
				tochnost = 0.000001;
				format = "0.0000000";
				format1 = "0.000000";
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				radioButton3->Checked = false;
				radioButton4->Checked = false;
				radioButton5->Checked = false;
				radioButton6->Checked = true;
				MessageBox::Show("Маленькая точность" + "\r\n" + "Тоность изменена на 0,000001", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else if (a < -9)
			{
				tochnost = 0.00001;
				format = "0.000000";
				format1 = "0.00000";
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				radioButton3->Checked = false;
				radioButton4->Checked = false;
				radioButton5->Checked = true;
				MessageBox::Show("Маленькая точность" + "\r\n" + "Тоность изменена на 0,00001", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else if (a < -7)
			{
				tochnost= 0.0001;
				format = "0.00000";
				format1 = "0.0000";
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				radioButton3->Checked = false;
				radioButton4->Checked = true;
				MessageBox::Show("Маленькая точность" + "\r\n" + "Тоность изменена на 0,0001", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else if (a < -3)
			{
				tochnost = 0.001;
				format = "0.0000";
				format1 = "0.000";
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				radioButton3->Checked = true;
				MessageBox::Show("Маленькая точность"+"\r\n"+"Тоность изменена на 0,001", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			label9->Text = Convert::ToString(a);
			label10->Text = Convert::ToString(tochnost);
			label10->Text = tochnost.ToString(format1);
			label11->Text = Math::Exp(a).ToString(format);
			//double exp = 0, slag = 1;
			int i = 1;
			ch = a;
			sum = 1 + a;
			n = 1;
			slag = 1;
			for (col = 1; abs(slag) > abs(tochnost); col++)
			{
				cnt = col;
				ch *= a;
				n *= col + 1;
				slag = ch / n;
				sum += slag;
			};
			label13->Text = sum.ToString(format);
			label12->Text = Convert::ToString(cnt);
		}
		else
		{
			MessageBox::Show("Введите число", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		   tochnost = 0.1;
		   format = "0.00";
		   format1 = "0.0";
		   clear();
	   }
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tochnost = 0.01;
	format = "0.000";
	format1 = "0.00";
	clear();
}

private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tochnost = 0.001;
	format = "0.0000";
	format1 = "0.000";
	clear();
}


private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tochnost = 0.0001;
	format = "0.00000";
	format1 = "0.0000";
	clear();
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tochnost = 0.00001;
	format = "0.000000";
	format1 = "0.00000";
	clear();
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tochnost = 0.000001;
	format = "0.0000000";
	format1 = "0.000000";
	clear();
}
	double pred;
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	clear();
	if(textBox1->Text->Length != 0 && textBox1->Text != "-")
		a = Convert::ToDouble(textBox1->Text);
	if (a > 20) {
		pred = a;
		textBox1->Text = "20";
	}
	if (a < -13) {
		pred = a;
		textBox1->Text = "-13";
	}
	/*if (textBox1->Text->Length== 0) {
		textBox1->Text = "0";
	}*/
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	CultureInfo^ culture = CultureInfo::CurrentCulture;
	e->Handled = true;
	if ((e->KeyChar >= (char)Keys::D0) && (e->KeyChar <= (char)Keys::D9)) {
		e->Handled = false;
	}
	if ((e->KeyChar == '-') && (textBox1->Text->IndexOf('-') == -1)) {
		if (textBox1->SelectionStart != 0) {
			textBox1->SelectionStart = 0;
		}
		e->Handled = false;
	}
	if ((textBox1->Text->IndexOf('-') == 0) && (textBox1->SelectionStart == 0)) {
		e->Handled = true;
	}
	else if ((culture->NumberFormat->NumberDecimalSeparator == Convert::ToString(e->KeyChar)) && (textBox1->Text->IndexOf(e->KeyChar) == -1)) {
		e->Handled = false;
		if (textBox1->SelectionStart == 0) {
			textBox1->Text = textBox1->Text->Insert(0, "0");
			textBox1->SelectionStart += 1;
		}
		else if ((textBox1->SelectionStart == 1) && (textBox1->Text->IndexOf('-') == 0)) {
			textBox1->Text = textBox1->Text->Insert(1, "0");
			textBox1->SelectionStart = 2;
		}
	}
	if ((e->KeyChar == (char)Keys::Back) || (e->KeyChar == (char)Keys::Delete) && !(e->KeyChar == '.')) {
		e->Handled = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
