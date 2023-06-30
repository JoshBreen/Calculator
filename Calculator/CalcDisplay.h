#pragma once
#include <string>



namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	int characterLimit = 10;
	bool first_click;




	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		
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
	private: System::Windows::Forms::Label^ sub_label;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void limitString(System::String^% str) {
			if (str->Length > characterLimit) {
				str = str->Substring(0, 10);
			}
		}

		void numberPush(System::String^% x) {
			if (first_click == true) {
				current_num = x;
				first_click = false;
			}
			else {
				current_num += x;
			}
			display_label->Text = current_num;

		}

		void operatorPushed(System::String^% str) {
			limitString(str);
			num1 = System::Convert::ToDouble(str);
			first_click = true;
			sub_label->Text = str;
			current_num = "";

		}

		void HandleOperatorButtonClick(System::String^ operatorText, bool% operatorFlag)
		{
			if (!multiplication && !division && !addition && !subtraction)
			{
				if (current_num == "") {
					current_num = "0";
				}
				operatorPushed(current_num);
				operatorFlag = true;
				sub_label->Text += " " + operatorText + " ";
			}
			else
			{
				multiplication = division = addition = subtraction = false;
				sub_label->Text = sub_label->Text->Substring(0, sub_label->Text->Length - 3);
				operatorFlag = true;
				sub_label->Text += " " + operatorText + " ";
			}
		}

		void checkForNumber() {
			if (current_num == "") {
				current_num = display_label->Text;
			}
		}

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
			this->sub_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// zero_button
			// 
			this->zero_button->Location = System::Drawing::Point(76, 259);
			this->zero_button->Name = L"zero_button";
			this->zero_button->Size = System::Drawing::Size(42, 43);
			this->zero_button->TabIndex = 0;
			this->zero_button->Text = L"0";
			this->zero_button->UseVisualStyleBackColor = true;
			this->zero_button->Click += gcnew System::EventHandler(this, &MyForm::zero_button_Click);
			// 
			// one_button
			// 
			this->one_button->Location = System::Drawing::Point(28, 210);
			this->one_button->Name = L"one_button";
			this->one_button->Size = System::Drawing::Size(42, 43);
			this->one_button->TabIndex = 1;
			this->one_button->Text = L"1";
			this->one_button->UseVisualStyleBackColor = true;
			this->one_button->Click += gcnew System::EventHandler(this, &MyForm::one_button_Click);
			// 
			// two_button
			// 
			this->two_button->Location = System::Drawing::Point(76, 210);
			this->two_button->Name = L"two_button";
			this->two_button->Size = System::Drawing::Size(42, 43);
			this->two_button->TabIndex = 2;
			this->two_button->Text = L"2";
			this->two_button->UseVisualStyleBackColor = true;
			this->two_button->Click += gcnew System::EventHandler(this, &MyForm::two_button_Click);
			// 
			// three_button
			// 
			this->three_button->Location = System::Drawing::Point(124, 210);
			this->three_button->Name = L"three_button";
			this->three_button->Size = System::Drawing::Size(42, 43);
			this->three_button->TabIndex = 3;
			this->three_button->Text = L"3";
			this->three_button->UseVisualStyleBackColor = true;
			this->three_button->Click += gcnew System::EventHandler(this, &MyForm::three_button_Click);
			// 
			// four_button
			// 
			this->four_button->Location = System::Drawing::Point(28, 161);
			this->four_button->Name = L"four_button";
			this->four_button->Size = System::Drawing::Size(42, 43);
			this->four_button->TabIndex = 4;
			this->four_button->Text = L"4";
			this->four_button->UseVisualStyleBackColor = true;
			this->four_button->Click += gcnew System::EventHandler(this, &MyForm::four_button_Click);
			// 
			// five_button
			// 
			this->five_button->Location = System::Drawing::Point(76, 161);
			this->five_button->Name = L"five_button";
			this->five_button->Size = System::Drawing::Size(42, 43);
			this->five_button->TabIndex = 5;
			this->five_button->Text = L"5";
			this->five_button->UseVisualStyleBackColor = true;
			this->five_button->Click += gcnew System::EventHandler(this, &MyForm::five_button_Click);
			// 
			// six_button
			// 
			this->six_button->Location = System::Drawing::Point(124, 161);
			this->six_button->Name = L"six_button";
			this->six_button->Size = System::Drawing::Size(42, 43);
			this->six_button->TabIndex = 6;
			this->six_button->Text = L"6";
			this->six_button->UseVisualStyleBackColor = true;
			this->six_button->Click += gcnew System::EventHandler(this, &MyForm::six_button_Click);
			// 
			// seven_button
			// 
			this->seven_button->Location = System::Drawing::Point(28, 112);
			this->seven_button->Name = L"seven_button";
			this->seven_button->Size = System::Drawing::Size(42, 43);
			this->seven_button->TabIndex = 7;
			this->seven_button->Text = L"7";
			this->seven_button->UseVisualStyleBackColor = true;
			this->seven_button->Click += gcnew System::EventHandler(this, &MyForm::seven_button_Click);
			// 
			// eight_button
			// 
			this->eight_button->Location = System::Drawing::Point(76, 112);
			this->eight_button->Name = L"eight_button";
			this->eight_button->Size = System::Drawing::Size(42, 43);
			this->eight_button->TabIndex = 8;
			this->eight_button->Text = L"8";
			this->eight_button->UseVisualStyleBackColor = true;
			this->eight_button->Click += gcnew System::EventHandler(this, &MyForm::eight_button_Click);
			// 
			// nine_button
			// 
			this->nine_button->Location = System::Drawing::Point(124, 112);
			this->nine_button->Name = L"nine_button";
			this->nine_button->Size = System::Drawing::Size(42, 43);
			this->nine_button->TabIndex = 9;
			this->nine_button->Text = L"9";
			this->nine_button->UseVisualStyleBackColor = true;
			this->nine_button->Click += gcnew System::EventHandler(this, &MyForm::nine_button_Click);
			// 
			// clear_button
			// 
			this->clear_button->Location = System::Drawing::Point(28, 259);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(42, 43);
			this->clear_button->TabIndex = 10;
			this->clear_button->Text = L"C";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &MyForm::clear_button_Click);
			// 
			// divide_button
			// 
			this->divide_button->Location = System::Drawing::Point(172, 161);
			this->divide_button->Name = L"divide_button";
			this->divide_button->Size = System::Drawing::Size(42, 43);
			this->divide_button->TabIndex = 11;
			this->divide_button->Text = L"/";
			this->divide_button->UseVisualStyleBackColor = true;
			this->divide_button->Click += gcnew System::EventHandler(this, &MyForm::divide_button_Click);
			// 
			// multiply_button
			// 
			this->multiply_button->Location = System::Drawing::Point(172, 112);
			this->multiply_button->Name = L"multiply_button";
			this->multiply_button->Size = System::Drawing::Size(42, 43);
			this->multiply_button->TabIndex = 12;
			this->multiply_button->Text = L"X";
			this->multiply_button->UseVisualStyleBackColor = true;
			this->multiply_button->Click += gcnew System::EventHandler(this, &MyForm::multiply_button_Click);
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(172, 210);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(42, 43);
			this->add_button->TabIndex = 13;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// subtract_button
			// 
			this->subtract_button->Location = System::Drawing::Point(172, 259);
			this->subtract_button->Name = L"subtract_button";
			this->subtract_button->Size = System::Drawing::Size(42, 43);
			this->subtract_button->TabIndex = 14;
			this->subtract_button->Text = L"-";
			this->subtract_button->UseVisualStyleBackColor = true;
			this->subtract_button->Click += gcnew System::EventHandler(this, &MyForm::subtract_button_Click);
			// 
			// equal_button
			// 
			this->equal_button->Location = System::Drawing::Point(28, 308);
			this->equal_button->Name = L"equal_button";
			this->equal_button->Size = System::Drawing::Size(186, 43);
			this->equal_button->TabIndex = 15;
			this->equal_button->Text = L"=";
			this->equal_button->UseVisualStyleBackColor = true;
			this->equal_button->Click += gcnew System::EventHandler(this, &MyForm::equal_button_Click);
			// 
			// decimal_button
			// 
			this->decimal_button->Location = System::Drawing::Point(124, 259);
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
			this->display_label->Location = System::Drawing::Point(28, 69);
			this->display_label->Name = L"display_label";
			this->display_label->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->display_label->Size = System::Drawing::Size(186, 31);
			this->display_label->TabIndex = 17;
			this->display_label->Text = L"0";
			this->display_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// sub_label
			// 
			this->sub_label->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->sub_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub_label->Location = System::Drawing::Point(28, 46);
			this->sub_label->Name = L"sub_label";
			this->sub_label->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->sub_label->Size = System::Drawing::Size(186, 23);
			this->sub_label->TabIndex = 18;
			this->sub_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 387);
			this->Controls->Add(this->sub_label);
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
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	//If it's the first click of a button at the start or after an operand it will start a new
	//string for the current number being made. If the buttons have already been clicked it will
	//append the number to the end of the string.
	private: System::Void zero_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("0");
		if (current_num == "") {}
		else {
			numberPush(input);
		}
	}

	private: System::Void one_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("1");

		numberPush(input);
	}

	private: System::Void two_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("2");

		numberPush(input);
	}

	private: System::Void three_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("3");

		numberPush(input);
	}

	private: System::Void four_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("4");

		numberPush(input);
	}

	private: System::Void five_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("5");

		numberPush(input);
	}

	private: System::Void six_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("6");

		numberPush(input);
	}

	private: System::Void seven_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("7");

		numberPush(input);
	}

	private: System::Void eight_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("8");

		numberPush(input);
	}

	private: System::Void nine_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = gcnew System::String("9");

		numberPush(input);
	}

	private: System::Void decimal_button_Click(System::Object^ sender, System::EventArgs^ e) {
		int found = current_num->IndexOf('.');
		if (found != -1) {}
		else if (first_click == true) {
			System::String^ input = gcnew System::String("0.");

			numberPush(input);
		}
		else {
			System::String^ input = gcnew System::String(".");

			numberPush(input);
		}

	}

	private: System::Void multiply_button_Click(System::Object^ sender, System::EventArgs^ e) {
		HandleOperatorButtonClick("X", multiplication);
		}

	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
		HandleOperatorButtonClick("+", addition);
		}

	private: System::Void subtract_button_Click(System::Object^ sender, System::EventArgs^ e) {
		HandleOperatorButtonClick("-", subtraction);
		}

	private: System::Void divide_button_Click(System::Object^ sender, System::EventArgs^ e) {
		HandleOperatorButtonClick("/", division);
		}


	private: System::Void equal_button_Click(System::Object^ sender, System::EventArgs^ e) {


		if (!multiplication && !division && !addition && !subtraction) {
			sub_label->Text = "Select a operator.";
		}

		else if (multiplication) {
			checkForNumber();
			limitString(current_num);
			sub_label->Text += current_num + " =";
			num2 = System::Convert::ToDouble(current_num);
			result = num1 * num2;
			current_num = System::Convert::ToString(result);
			limitString(current_num);
			display_label->Text = System::Convert::ToString(result);
			multiplication = false;
		}
		else if (division) {
			checkForNumber();
			limitString(current_num);
			sub_label->Text += current_num + " =";
			num2 = System::Convert::ToDouble(current_num);

			if (num2 == 0) {
				sub_label->Text = "Error: Cannot divide by 0";
			}
			else {
				result = num1 / num2;
				current_num = System::Convert::ToString(result);
				display_label->Text = System::Convert::ToString(result);
			}

			division = false;
		}
		else if (addition) {
			checkForNumber();
			limitString(current_num);
			sub_label->Text += current_num + " =";
			num2 = System::Convert::ToDouble(current_num);
			result = num1 + num2;
			current_num = System::Convert::ToString(result);
			display_label->Text = System::Convert::ToString(result);
			addition = false;
		}
		else if (subtraction) {
			checkForNumber();
			limitString(current_num);
			sub_label->Text += current_num + " =";
			num2 = System::Convert::ToDouble(current_num);
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
		sub_label->Text = "";

	}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
