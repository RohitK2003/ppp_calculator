#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ req;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;


	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->req = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(264, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Know your Required Salary";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter value in INR:";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(52, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 98);
			this->button1->TabIndex = 4;
			this->button1->Text = L"U.S.A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(209, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 98);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Canada";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(370, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 98);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Singapore";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(531, 229);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 98);
			this->button4->TabIndex = 7;
			this->button4->Text = L"U.K";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(531, 328);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 103);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Hong Kong";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(370, 328);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 103);
			this->button6->TabIndex = 10;
			this->button6->Text = L"U.A.E";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(209, 328);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(161, 103);
			this->button7->TabIndex = 9;
			this->button7->Text = L"China";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(48, 328);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(161, 103);
			this->button8->TabIndex = 8;
			this->button8->Text = L"France";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// result
			// 
			this->result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->Location = System::Drawing::Point(52, 133);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 29);
			this->result->TabIndex = 12;
			// 
			// req
			// 
			this->req->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->req->AutoSize = true;
			this->req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->req->Location = System::Drawing::Point(52, 162);
			this->req->Name = L"req";
			this->req->Size = System::Drawing::Size(0, 22);
			this->req->TabIndex = 13;
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::IndianRed;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(743, 24);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(37, 36);
			this->button9->TabIndex = 14;
			this->button9->Text = L"X";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(698, 24);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(39, 36);
			this->button10->TabIndex = 15;
			this->button10->Text = L"i";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(792, 473);
			this->ControlBox = false;
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->req);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Purchase Power Parity";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0") {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income *= 0.04307505392510;
			result->Text = "$ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in U.S to live a similar life.";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0") {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income *= 0.0532554121697606016;
			result->Text = "$ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in Canada to live a similar life.";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0" || textBox1->Text->Length==0) {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income *= 0.03616459503853;
			result->Text = "$ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in Singapore to live a similar life.";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0" || textBox1->Text->Length == 0) {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income *= 0.0291762847254;
			result->Text = "£ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in U.K to live a similar life.";
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0" || textBox1->Text->Length == 0) {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income *= 0.03096445943900564;
			result->Text = "€ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in France to live a similar life.";
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0" || textBox1->Text->Length == 0) {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income = income * 0.1803699657536;
			result->Text = "¥ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in China to live a similar life.";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0" || textBox1->Text->Length == 0) {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income = 0.0915088090267064 * income;
			result->Text = System::Convert::ToString(income) + " Dirham";
			req->Text = "You need a salary of " + result->Text + " in U.A.E to live a similar life.";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0" || textBox1->Text->Length == 0) {
			MessageBox::Show("Please enter a value.");
		}
		else {
			int income = System::Convert::ToInt64(textBox1->Text);
			income = 0.25306324182701 * income;
			result->Text = "$ " + System::Convert::ToString(income);
			req->Text = "You need a salary of " + result->Text + " in Hong Kong to live a similar life.";
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you really want to exit ?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("The value represented is the approximate value.\nThe original value may differ.", "info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
