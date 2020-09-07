#include<cstdlib>
#include<iostream>
#pragma once

namespace task1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;


		

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 75);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов в массиве:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 110);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минимальные значение диапазона:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 146);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Максимальное значение диапазона:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(351, 75);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(351, 110);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(351, 146);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(606, 61);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 30);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Генерация массива";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(51, 50);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(457, 134);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 226);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Исходный массив:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(63, 261);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(475, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(67, 498);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Результат операции";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(71, 533);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(437, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(606, 529);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(150, 30);
			this->btnClose->TabIndex = 13;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(605, 309);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 30);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(0, 19);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(145, 21);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сумма элементов";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(0, 48);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(153, 21);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->Text = L"Среднее значение";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(0, 76);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(181, 21);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->Text = L"Минимальный элемент";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(0, 104);
			this->radioButton4->Margin = System::Windows::Forms::Padding(4);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(187, 21);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->Text = L"Максимальный элемент";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(223, 19);
			this->radioButton5->Margin = System::Windows::Forms::Padding(4);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(149, 21);
			this->radioButton5->TabIndex = 19;
			this->radioButton5->Text = L"Чётные элементы";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(223, 48);
			this->radioButton6->Margin = System::Windows::Forms::Padding(4);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(165, 21);
			this->radioButton6->TabIndex = 20;
			this->radioButton6->Text = L"Нечётные элементы";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(223, 76);
			this->radioButton7->Margin = System::Windows::Forms::Padding(4);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(217, 21);
			this->radioButton7->TabIndex = 21;
			this->radioButton7->Text = L"Сортировка по возрастанию";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(223, 104);
			this->radioButton8->Margin = System::Windows::Forms::Padding(4);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(197, 21);
			this->radioButton8->TabIndex = 22;
			this->radioButton8->Text = L"Сортировка по убыванию";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Location = System::Drawing::Point(63, 309);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(452, 142);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(603, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 17);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Имя файл ввода:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(603, 361);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Имя файла вывода:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(606, 115);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(140, 22);
			this->textBox6->TabIndex = 26;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(605, 384);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(150, 22);
			this->textBox7->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(605, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 30);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Ввод из файла";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(606, 424);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 30);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 664);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool chek = false, chek2=false;
		/*int znach(array<int>^ n, int kol, int max)
		{
			for (int i = 1; int j < kol, j++)   //i-первый элемент j-текущий 
			{
				max = max + 1;
				if (n[i - 1] > max)
				{
					max = n[i - 1];
				}
				i++;
				if (i == kol) 
				{
					textBox1->Text = textBox1->Text + " " + max.ToString;
					j++;
				}
				
			}
			
		}*/
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		array<int>^ arr = Array::ConvertAll(textBox4->Text->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries), gcnew Converter<String^, int>(Convert::ToInt32));
		int n = arr->Length;
		textBox4->Text = "";
		for (int i=0; i<arr->Length;i++) 
		{
			textBox4->Text += arr[i] + " ";
		}
		if (radioButton1->Checked == true) {
			int sum = 0;
			for (int i = 0; i < n; i++)
				sum = sum + arr[i];
			textBox5->Text = "Сумма элементов: " + Convert::ToString(sum);
		}
		else if (radioButton2->Checked == true) {
			int cnt = 0, sum = 0, aver = 0;
			for (int i = 0; i < n; i++) {
				sum = sum + arr[i];
				cnt++;
			}
			aver = abs(sum / cnt);
			textBox5->Text = "Среднее значение: " + Convert::ToString(aver);
		}
		else if (radioButton3->Checked == true) {
			int min = 10000;
			for (int i = 0; i < n; i++) {
				if (arr[i] < min)
					min = arr[i];
			}
			textBox5->Text = "Минимальный элемент: " + Convert::ToString(min);
		}
		else if (radioButton4->Checked == true) {
			int max = 0;
			for (int i = 0; i < n; i++) {
				if (arr[i] > max)
					max = arr[i];
			}
			textBox5->Text = "Максимальный элемент: " + Convert::ToString(max);
		}
		else if (radioButton5->Checked == true) {
			textBox5->Text = "Чётные элементы: ";
			for (int i = 0; i < n; i++) {
				if (abs(arr[i] % 2) == 0) {
					textBox5->Text = textBox5->Text + " " + arr[i];
				}
			}
		}
		else if (radioButton6->Checked == true) {
			textBox5->Text = "Нечётные элементы: ";
			for (int i = 0; i < n; i++) {
				if (abs(arr[i] % 2) == 1)
					textBox5->Text = textBox5->Text + " " + arr[i];
			}
		}

		else if (radioButton7->Checked == true) {
			textBox5->Text = "Сортировка по возрастанию: ";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n-1 - i; j++) {
					if (arr[j] > arr[j + 1]) {
						int buf;
						buf = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = buf;
					}
				}
			}
			for (int i = 0; i < n; i++)
				textBox5->Text = textBox5->Text + " " + arr[i];
		}
		else if (radioButton8->Checked == true) {
			textBox5->Text = "Сортировка по убыванию: ";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n-1 - i; j++) {
					if (arr[j] < arr[j + 1]) {
						int buf;
						buf = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = buf;
					}
				}
			}
			for (int i = 0; i < n; i++)
				textBox5->Text = textBox5->Text + " " + arr[i];
		}
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int kolvo, min_ch, max_ch;
		this->textBox4->Text = L"";
		kolvo = Convert::ToInt32(textBox1->Text);
		min_ch = Convert::ToInt32(textBox2->Text);
		max_ch = Convert::ToInt32(textBox3->Text);
		array<int>^ arr = gcnew array<int>(kolvo);
		Random^ rnd = gcnew Random;
		for (int k = 0; k < kolvo; k++) {
			arr[k] = rnd->Next(min_ch, max_ch + 1);
			textBox4->Text = textBox4->Text + " " + arr[k];
		}
	}
		   /*
		    String^ S="";
			String^ subs1="";
			String^ subs2="";
			String^ p="";
			String^ p1="";
			p=textBox4->Text;
			p1=textBox5->Text;
			if(subs1=="" && subs2=="")
			{
				S+=textBox4
				...
				subs1=textBox4->Text;
				subs2=textBox5->Text;
			}
			if(subs1!=p)
			{
				S+=Environment::NewLine;
				S+= Environment::NewLine;
				...
				subs1=textBox4->Text;
				subs2=textBox5->Text;
			}
			else if (subs2!=p1)
			{
			 S+=Environment::NewLine;
			 S+=textBox5->Text;
			 subs2=textBox5->Text;
			}
			SaveFile();
		   */
		   String^ str = "";
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SaveFileDialog^ SaveFileDialog1 = gcnew SaveFileDialog();
	SaveFileDialog1->Title = "Сохранение файла";
	SaveFileDialog1->Filter = "Text Files (*.txt)|*.txt |All files (*.*)|*.*";
	SaveFileDialog1->FilterIndex = 1;
	SaveFileDialog1->RestoreDirectory = true;
	SaveFileDialog1->OverwritePrompt = false;
	if (SaveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK&&SaveFileDialog1->FileName->Length>0) 
	{
		str = "";
		//textBox6->Text = Convert::ToString(chek);
		if (chek == false)
		{
			str = label4->Text + " " + textBox4->Text;
			str += Environment::NewLine;
			if (chek2 == false)
			{
				str += textBox5->Text;
				str += Environment::NewLine;
				str += Environment::NewLine;
				textBox7->Text = SaveFileDialog1->FileName;
				IO::File::AppendAllText(SaveFileDialog1->FileName, str);
			}
		}
		else if (chek==true && chek2 == false) //chek=true
			{
				str += textBox5->Text;
				str += Environment::NewLine;
				str += Environment::NewLine;
				textBox7->Text = SaveFileDialog1->FileName;
				IO::File::AppendAllText(SaveFileDialog1->FileName, str);
			}
			else if (chek==true && chek2==true)
			{
				str = "";
				textBox7->Text = SaveFileDialog1->FileName;
				IO::File::AppendAllText(SaveFileDialog1->FileName, str);
			}
		chek = true;
		chek2 = true;
	}
}
	   String^ Open = "";
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//FileStream^ fs = gcnew fs(FileAccess::Read);
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox5->Text = "";
	OpenFileDialog^ OpenFileDialog1 = gcnew OpenFileDialog;
	OpenFileDialog1->Title = "Открытие файла";
	OpenFileDialog1->InitialDirectory = "c:\\";
	OpenFileDialog1->Filter = "txt files(*.txt) | *.txt | All files(*.*) | *.*";
	OpenFileDialog1->FilterIndex = 1;
	OpenFileDialog1->ShowReadOnly = true;
	OpenFileDialog1->RestoreDirectory = true;
	if (OpenFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK&& OpenFileDialog1->FileName->Length > 0) {
		textBox6 -> Text = OpenFileDialog1->FileName;
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(OpenFileDialog1->FileName);
		String^ Txt = "";
		while (sr->Peek() >= 0)
		{
			Open = sr->ReadLine();
			for (int i = 0; i < Open->Length; i++)
			{
				if (Open[i] == ' ' && isdigit(Open[i - 1]))
				{
					Txt += " ";
				}
				else if (Open[i] == '-' && isdigit(Open[i + 1]))
				{
					Txt += "-";
				}
				else if (isdigit(Open[i]))
				{
					Txt += Open[i];
				}
			}
		}
		sr->Close();
		textBox4->Text = Txt;
	}
	else
		textBox6 -> Text = "";
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	chek = false;
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox5->Text = "";
	char sep = ',';
	if (!Char::IsDigit(e->KeyChar))
		if (e->KeyChar == '-' || textBox4->Text->IndexOf('-') == -1)
			if ((e->KeyChar != sep || textBox4->Text->IndexOf(sep) != -1))
				if (e->KeyChar != (char)Keys::Back)
					e->Handled = true;
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)
		if (textBox4->Text->Length >= 1)
			if (textBox4->Text[0] == '0' && textBox4->SelectionStart < 2)
		e->Handled=true;
	if (e->KeyChar == sep) 
	{
		e->Handled = true;

	}
	if (e->KeyChar == '-')
	{
		e->Handled = false;
	}
	if (e->KeyChar == ' ') {
		e->Handled = false;
	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	chek2 = false;
}
};
}

