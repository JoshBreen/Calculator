#pragma once
#include <string>

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
	private:
		bool first_click;
		System::String^ current_num;
		double num1; 
		double num2; 
		double result; 
		bool multiplication;
		bool division;
		bool addition;
   		bool subtraction;

	public:

		MyForm(void)
		{
			InitializeComponent();
			first_click = true;
			current_num = "";
			multiplication = false;
			division = false;
			addition = false;
			subtraction = false;

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
	private: System::Windows::Forms::Button^ zero_button;
	protected:
	private: System::Windows::Forms::Button^ one_button;
	private: System::Windows::Forms::Button^ two_button;
	private: System::Windows::Forms::Button^ three_button;
	private: System::Windows::Forms::Button^ four_button;
	private: System::Windows::Forms::Button^ five_button;
	private: System::Windows::Forms::Button^ six_button;
	private: System::Windows::Forms::Button^ seven_button;
	private: System::Windows::Forms::Button^ eight_button;
	private: System::Windows::Forms::Button^ nine_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::Button^ divide_button;
	private: System::Windows::Forms::Button^ multiply_button;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ subtract_button;
	private: System::Windows::Forms::Button^ equal_button;
	private: System::Windows::Forms::Button^ decimal_button;
	private: System::Windows::Forms::Label^ display_label;

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
			this->zero_button = (gcnew System::Windows::Forms::Button());
			this->one_button = (gcnew System::Windows::Forms::Button());
			this->two_button = (gcnew System::Windows::Forms::Button());
			this->three_button = (gcnew System::Windows::Forms::Button());
			this->four_button = (gcnew System::Windows::Forms::Button());
			this->five_button = (gcnew System::Windows::Forms::Button());
			this->six_button = (gcnew System::Windows::Forms::Button());
			this->seven_button = (gcnew System::Windows::Forms::Button());
			this->eight_button = (gcnew System::Windows::Forms::Button());
			this->nine_button = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->divide_button = (gcnew System::Windows::Forms::Button());
			this->multiply_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->subtract_button = (gcnew System::Windows::Forms::Button());
			this->equal_button = (gcnew System::Windows::Forms::Button());
			this->decimal_button = (gcnew System::Windows::Forms::Button());
			this->display_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// zero_button
			// 
			this->zero_button->Location = System::Drawing::Point(73, 219);
			this->zero_button->Name = L"zero_button";
			this->zero_button->Size = System::Drawing::Size(42, 43);
			this->zero_button->TabIndex = 0;
			this->zero_button->Text = L"0";
			this->zero_button->UseVisualStyleBackColor = true;
			this->zero_button->Click += gcnew System::EventHandler(this, &MyForm::zero_button_Click);
			// 
			// one_button
			// 
			this->one_button->Location = System::Drawing::Point(25, 170);
			this->one_button->Name = L"one_button";
			this->one_button->Size = System::Drawing::Size(42, 43);
			this->one_button->TabIndex = 1;
			this->one_button->Text = L"1";
			this->one_button->UseVisualStyleBackColor = true;
			this->one_button->Click += gcnew System::EventHandler(this, &MyForm::one_button_Click);
			// 
			// two_button
			// 
			this->two_button->Location = System::Drawing::Point(73, 170);
			this->two_button->Name = L"two_button";
			this->two_button->Size = System::Drawing::Size(42, 43);
			this->two_button->TabIndex = 2;
			this->two_button->Text = L"2";
			this->two_button->UseVisualStyleBackColor = true;
			this->two_button->Click += gcnew System::EventHandler(this, &MyForm::two_button_Click);
			// 
			// three_button
			// 
			this->three_button->Location = System::Drawing::Point(121, 170);
			this->three_button->Name = L"three_button";
			this->three_button->Size = System::Drawing::Size(42, 43);
			this->three_button->TabIndex = 3;
			this->three_button->Text = L"3";
			this->three_button->UseVisualStyleBackColor = true;
			this->three_button->Click += gcnew System::EventHandler(this, &MyForm::three_button_Click);
			// 
			// four_button
			// 
			this->four_button->Location = System::Drawing::Point(25, 121);
			this->four_button->Name = L"four_button";
			this->four_button->Size = System::Drawing::Size(42, 43);
			this->four_button->TabIndex = 4;
			this->four_button->Text = L"4";
			this->four_button->UseVisualStyleBackColor = true;
			this->four_button->Click += gcnew System::EventHandler(this, &MyForm::four_button_Click);
			// 
			// five_button
			// 
			this->five_button->Location = System::Drawing::Point(73, 121);
			this->five_button->Name = L"five_button";
			this->five_button->Size = System::Drawing::Size(42, 43);
			this->five_button->TabIndex = 5;
			this->five_button->Text = L"5";
			this->five_button->UseVisualStyleBackColor = true;
			this->five_button->Click += gcnew System::EventHandler(this, &MyForm::five_button_Click);
			// 
			// six_button
			// 
			this->six_button->Location = System::Drawing::Point(121, 121);
			this->six_button->Name = L"six_button";
			this->six_button->Size = System::Drawing::Size(42, 43);
			this->six_button->TabIndex = 6;
			this->six_button->Text = L"6";
			this->six_button->UseVisualStyleBackColor = true;
			this->six_button->Click += gcnew System::EventHandler(this, &MyForm::six_button_Click);
			// 
			// seven_button
			// 
			this->seven_button->Location = System::Drawing::Point(25, 72);
			this->seven_button->Name = L"seven_button";
			this->seven_button->Size = System::Drawing::Size(42, 43);
			this->seven_button->TabIndex = 7;
			this->seven_button->Text = L"7";
			this->seven_button->UseVisualStyleBackColor = true;
			this->seven_button->Click += gcnew System::EventHandler(this, &MyForm::seven_button_Click);
			// 
			// eight_button
			// 
			this->eight_button->Location = System::Drawing::Point(73, 72);
			this->eight_button->Name = L"eight_button";
			this->eight_button->Size = System::Drawing::Size(42, 43);
			this->eight_button->TabIndex = 8;
			this->eight_button->Text = L"8";
			this->eight_button->UseVisualStyleBackColor = true;
			this->eight_button->Click += gcnew System::EventHandler(this, &MyForm::eight_button_Click);
			// 
			// nine_button
			// 
			this->nine_button->Location = System::Drawing::Point(121, 72);
			this->nine_button->Name = L"nine_button";
			this->nine_button->Size = System::Drawing::Size(42, 43);
			this->nine_button->TabIndex = 9;
			this->nine_button->Text = L"9";
			this->nine_button->UseVisualStyleBackColor = true;
			this->nine_button->Click += gcnew System::EventHandler(this, &MyForm::nine_button_Click);
			// 
			// clear_button
			// 
			this->clear_button->Location = System::Drawing::Point(25, 219);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(42, 43);
			this->clear_button->TabIndex = 10;
			this->clear_button->Text = L"C";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &MyForm::clear_button_Click);
			// 
			// divide_button
			// 
			this->divide_button->Location = System::Drawing::Point(169, 121);
			this->divide_button->Name = L"divide_button";
			this->divide_button->Size = System::Drawing::Size(42, 43);
			this->divide_button->TabIndex = 11;
			this->divide_button->Text = L"/";
			this->divide_button->UseVisualStyleBackColor = true;
			this->divide_button->Click += gcnew System::EventHandler(this, &MyForm::divide_button_Click);
			// 
			// multiply_button
			// 
			this->multiply_button->Location = System::Drawing::Point(169, 72);
			this->multiply_button->Name = L"multiply_button";
			this->multiply_button->Size = System::Drawing::Size(42, 43);
			this->multiply_button->TabIndex = 12;
			this->multiply_button->Text = L"X";
			this->multiply_button->UseVisualStyleBackColor = true;
			this->multiply_button->Click += gcnew System::EventHandler(this, &MyForm::multiply_button_Click);
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(169, 170);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(42, 43);
			this->add_button->TabIndex = 13;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// subtract_button
			// 
			this->subtract_button->Location = System::Drawing::Point(169, 219);
			this->subtract_button->Name = L"subtract_button";
			this->subtract_button->Size = System::Drawing::Size(42, 43);
			this->subtract_button->TabIndex = 14;
			this->subtract_button->Text = L"-";
			this->subtract_button->UseVisualStyleBackColor = true;
			this->subtract_button->Click += gcnew System::EventHandler(this, &MyForm::subtract_button_Click);
			// 
			// equal_button
			// 
			this->equal_button->Location = System::Drawing::Point(25, 268);
			this->equal_button->Name = L"equal_button";
			this->equal_button->Size = System::Drawing::Size(186, 43);
			this->equal_button->TabIndex = 15;
			this->equal_button->Text = L"=";
			this->equal_button->UseVisualStyleBackColor = true;
			this->equal_button->Click += gcnew System::EventHandler(this, &MyForm::equal_button_Click);
			// 
			// decimal_button
			// 
			this->decimal_button->Location = System::Drawing::Point(121, 219);
			this->decimal_button->Name = L"decimal_button";
			this->decimal_button->Size = System::Drawing::Size(42, 43);
			this->decimal_button->TabIndex = 16;
			this->decimal_button->Text = L".";
			this->decimal_button->UseVisualStyleBackColor = true;
			this->decimal_button->Click += gcnew System::EventHandler(this, &MyForm::decimal_button_Click);
			// 
			// display_label
			// 
			this->display_label->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->display_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display_label->Location = System::Drawing::Point(32, 34);
			this->display_label->Name = L"display_label";
			this->display_label->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->display_label->Size = System::Drawing::Size(186, 31);
			this->display_label->TabIndex = 17;
			this->display_label->Text = L"0";
			this->display_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 352);
			this->Controls->Add(this->display_label);
			this->Controls->Add(this->decimal_button);
			this->Controls->Add(this->equal_button);
			this->Controls->Add(this->subtract_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->multiply_button);
			this->Controls->Add(this->divide_button);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->nine_button);
			this->Controls->Add(this->eight_button);
			this->Controls->Add(this->seven_button);
			this->Controls->Add(this->six_button);
			this->Controls->Add(this->five_button);
			this->Controls->Add(this->four_button);
			this->Controls->Add(this->three_button);
			this->Controls->Add(this->two_button);
			this->Controls->Add(this->one_button);
			this->Controls->Add(this->zero_button);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Location = System::Drawing::Point(178, 299);
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	//If it's the first click of a button at the start or after an operand it will start a new
	//string for the current number being made. If the buttons have already been clicked it will
	//append the number to the end of the string.
	private: System::Void zero_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "0";
			first_click = false;
		}
		else {
			current_num += "0";
		}
		display_label->Text = current_num;
	}

	private: System::Void one_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "1";
			first_click = false;
		}
		else {
			current_num += "1";
		}
		display_label->Text = current_num;
	}

	private: System::Void two_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "2";
			first_click = false;
		}
		else {
			current_num += "2";
		}
		display_label->Text = current_num;
	}

	private: System::Void three_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "3";
			first_click = false;
		}
		else {
			current_num += "3";
		}
		display_label->Text = current_num;
	}

	private: System::Void four_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "4";
			first_click = false;
		}
		else {
			current_num += "4";
		}
		display_label->Text = current_num;
	}

	private: System::Void five_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "5";
			first_click = false;
		}
		else {
			current_num += "5";
		}
		display_label->Text = current_num;
	}

	private: System::Void six_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "6";
			first_click = false;
		}
		else {
			current_num += "6";
		}
		display_label->Text = current_num;
	}

	private: System::Void seven_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "7";
			first_click = false;
		}
		else {
			current_num += "7";
		}
		display_label->Text = current_num;
	}

	private: System::Void eight_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "8";
			first_click = false;
		}
		else {
			current_num += "8";
		}
		display_label->Text = current_num;
	}

	private: System::Void nine_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "9";
			first_click = false;
		}
		else {
			current_num += "9";
		}
		display_label->Text = current_num;
	}
	private: System::Void decimal_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_click == true) {
			current_num = "0.";
			first_click = false;
		}
		else {
			current_num += ".";
		}
		display_label->Text = current_num;
	}

	private: System::Void multiply_button_Click(System::Object^ sender, System::EventArgs^ e) {

		
		if (!multiplication && !division && !addition && !subtraction) {
			num1 = System::Convert::ToInt16(current_num);
			first_click = true;
			multiplication = true;
			current_num = "";
		}
		else {
			display_label->Text = "Click equal first.";
		}
	}

	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!multiplication && !division && !addition && !subtraction) {
			num1 = System::Convert::ToInt16(current_num);
			first_click = true;
			addition = true;
			current_num = "";
		}
		else {
			display_label->Text = "Click equal first.";
		}
	}
	private: System::Void subtract_button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!multiplication && !division && !addition && !subtraction) {
			num1 = System::Convert::ToInt16(current_num);
			first_click = true;
			subtraction = true;
			current_num = "";
		}
		else {
			display_label->Text = "Click equal first.";
		}
	}

	private: System::Void divide_button_Click(System::Object^ sender, System::EventArgs^ e) {


		if (!multiplication && !division && !addition && !subtraction) {
			num1 = System::Convert::ToInt16(current_num);
			first_click = true;
			division = true;

		}
		else {
			display_label->Text = "Click equal first.";
		}
	}


	private: System::Void equal_button_Click(System::Object^ sender, System::EventArgs^ e) {


		if (!multiplication && !division && !addition && !subtraction) {
			display_label->Text = "Select a operator.";
		}
		else if (multiplication) {
			num2 = System::Convert::ToInt16(current_num);
			result = num1 * num2;
			current_num = System::Convert::ToString(result);
			display_label->Text = System::Convert::ToString(result);
			multiplication = false;
		}
		else if (division) {
			num2 = System::Convert::ToInt16(current_num);
			result = num1 / num2;
			current_num = System::Convert::ToString(result);
			display_label->Text = System::Convert::ToString(result);
			division = false;

		}
		else if (addition) {
			num2 = System::Convert::ToInt16(current_num);
			result = num1 + num2;
			current_num = System::Convert::ToString(result);
			display_label->Text = System::Convert::ToString(result);
			addition = false;
		}
		else if (subtraction) {
			num2 = System::Convert::ToInt16(current_num);
			result = num1 - num2;
			current_num = System::Convert::ToString(result);
			display_label->Text = System::Convert::ToString(result);
			subtraction = false;
		}

	}

	private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
		num1 = 0;
		num2 = 0;
		current_num = "";
		result = 0;
		multiplication = false;
		division = false;
		addition = false;
		subtraction = false;
		display_label->Text = "";

	}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
