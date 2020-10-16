#pragma once
#include "Header.h"

namespace Практика4 {

	using namespace System;
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
			List = gcnew List_D;
			List_Two = gcnew List_D;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		List_D^ List;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button8;
	protected:
		List_D^ List_Two;
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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 47);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(262, 324);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Имена и их вариации";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(19, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Вариации имени";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(299, 47);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 167);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(290, 220);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(424, 197);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поиск и редактирование";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(228, 157);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(142, 27);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Сохранить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(221, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Вариации имени";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(207, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(163, 33);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Поиск по вариациям";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(19, 157);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 27);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Редактировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(125, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Вариации имени";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(207, 44);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(163, 22);
			this->textBox6->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Имя";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(19, 44);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 22);
			this->textBox4->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(19, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 33);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Поиск по имени";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(74, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 22);
			this->textBox3->TabIndex = 5;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(514, 47);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 167);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Формирование нового списка";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(19, 125);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(142, 27);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Сбросить фильтр";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(19, 92);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 27);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Сформировать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Введите первую букву";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(19, 64);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(142, 22);
			this->textBox5->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Удалить выбранное";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 443);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"Имена и их вариации";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "")
	{
		//Добавление элемента
		New_Node^ AddedNode = gcnew New_Node(textBox1->Text, textBox2->Text);
		List->Add(AddedNode);
		List->ViewAll(listBox1);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Enabled = false;
	textBox3->Enabled = true;
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Enabled = true;
	textBox3->Enabled = false;
	// Сохранить
	if (textBox3->Text != "")
	{
		List->Change_New(textBox4->Text, textBox3->Text);
		List->ViewAll(listBox1);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text != "")
	{
		//Поиск по имени
		New_Node^ Tmp = gcnew New_Node(List->Find(textBox4->Text));
		textBox4->Text = Tmp->name;
		textBox3->Text = Tmp->var_name;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox6->Text != "")
	{
		//Поиск по вариациям имен
		if (List->Find_VN(textBox6->Text) != nullptr)
		{
			New_Node^ Tmp = gcnew New_Node(List->Find_VN(textBox6->Text));
			textBox4->Text = Tmp->name;
		}
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text != "")
	{
		//Создаем новый список по условию
		List_Two = List->New_List(textBox5->Text);
		List_Two->ViewAll(listBox1);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//Показать список без фильтра
	List->ViewAll(listBox1);
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Удаление по индексу ЛистБокса
	int i = listBox1->SelectedIndex;
	New_Node^ tmp = gcnew New_Node(List->Find(i));
	List->Find_and_Del(tmp);
	List->ViewAll(listBox1);
}
};
}
