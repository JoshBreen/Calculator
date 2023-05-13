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

	protected:







	private: System::Windows::Forms::Label^ main_display;
	private: System::Windows::Forms::Button^ zero_button;
	private: System::Windows::Forms::Button^ one_button;
	private: System::Windows::Forms::Button^ two_button;
	private: System::Windows::Forms::Button^ three_button;
	private: System::Windows::Forms::Button^ four_button;
	private: System::Windows::Forms::Button^ five_button;
	private: System::Windows::Forms::Button^ six_button;
	private: System::Windows::Forms::Button^ seven_button;
	private: System::Windows::Forms::Button^ eight_button;
	private: System::Windows::Forms::Button^ nine_button;
	private: System::Windows::Forms::Button^ divide_button;
	private: System::Windows::Forms::Button^ multiply_button;
	private: System::Windows::Forms::Button^ subtract_button;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ equals_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::Button^ dec_button;




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
			this->main_display = (gcnew System::Windows::Forms::Label());
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
			this->divide_button = (gcnew System::Windows::Forms::Button());
			this->multiply_button = (gcnew System::Windows::Forms::Button());
			this->subtract_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->equals_button = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->dec_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// main_display
			// 
			this->main_display->AutoSize = true;
			this->main_display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_display->Location = System::Drawing::Point(199, 40);
			this->main_display->Name = L"main_display";
			this->main_display->Size = System::Drawing::Size(21, 24);
			this->main_display->TabIndex = 8;
			this->main_display->Text = L"0";
			this->main_display->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// zero_button
			// 
			this->zero_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero_button->Location = System::Drawing::Point(82, 250);
			this->zero_button->Name = L"zero_button";
			this->zero_button->Size = System::Drawing::Size(42, 42);
			this->zero_button->TabIndex = 9;
			this->zero_button->Text = L"0";
			this->zero_button->UseVisualStyleBackColor = true;
			// 
			// one_button
			// 
			this->one_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_button->Location = System::Drawing::Point(34, 201);
			this->one_button->Name = L"one_button";
			this->one_button->Size = System::Drawing::Size(42, 42);
			this->one_button->TabIndex = 10;
			this->one_button->Text = L"1";
			this->one_button->UseVisualStyleBackColor = true;
			this->one_button->Click += gcnew System::EventHandler(this, &MyForm::one_button_Click);
			// 
			// two_button
			// 
			this->two_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two_button->Location = System::Drawing::Point(82, 202);
			this->two_button->Name = L"two_button";
			this->two_button->Size = System::Drawing::Size(42, 42);
			this->two_button->TabIndex = 11;
			this->two_button->Text = L"2";
			this->two_button->UseVisualStyleBackColor = true;
			// 
			// three_button
			// 
			this->three_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three_button->Location = System::Drawing::Point(130, 201);
			this->three_button->Name = L"three_button";
			this->three_button->Size = System::Drawing::Size(42, 42);
			this->three_button->TabIndex = 12;
			this->three_button->Text = L"3";
			this->three_button->UseVisualStyleBackColor = true;
			// 
			// four_button
			// 
			this->four_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four_button->Location = System::Drawing::Point(34, 153);
			this->four_button->Name = L"four_button";
			this->four_button->Size = System::Drawing::Size(42, 42);
			this->four_button->TabIndex = 13;
			this->four_button->Text = L"4";
			this->four_button->UseVisualStyleBackColor = true;
			// 
			// five_button
			// 
			this->five_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five_button->Location = System::Drawing::Point(82, 153);
			this->five_button->Name = L"five_button";
			this->five_button->Size = System::Drawing::Size(42, 42);
			this->five_button->TabIndex = 14;
			this->five_button->Text = L"5";
			this->five_button->UseVisualStyleBackColor = true;
			// 
			// six_button
			// 
			this->six_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six_button->Location = System::Drawing::Point(130, 153);
			this->six_button->Name = L"six_button";
			this->six_button->Size = System::Drawing::Size(42, 42);
			this->six_button->TabIndex = 15;
			this->six_button->Text = L"6";
			this->six_button->UseVisualStyleBackColor = true;
			// 
			// seven_button
			// 
			this->seven_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven_button->Location = System::Drawing::Point(34, 105);
			this->seven_button->Name = L"seven_button";
			this->seven_button->Size = System::Drawing::Size(42, 42);
			this->seven_button->TabIndex = 16;
			this->seven_button->Text = L"7";
			this->seven_button->UseVisualStyleBackColor = true;
			// 
			// eight_button
			// 
			this->eight_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight_button->Location = System::Drawing::Point(82, 105);
			this->eight_button->Name = L"eight_button";
			this->eight_button->Size = System::Drawing::Size(42, 42);
			this->eight_button->TabIndex = 17;
			this->eight_button->Text = L"8";
			this->eight_button->UseVisualStyleBackColor = true;
			// 
			// nine_button
			// 
			this->nine_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine_button->Location = System::Drawing::Point(130, 105);
			this->nine_button->Name = L"nine_button";
			this->nine_button->Size = System::Drawing::Size(42, 42);
			this->nine_button->TabIndex = 18;
			this->nine_button->Text = L"9";
			this->nine_button->UseVisualStyleBackColor = true;
			// 
			// divide_button
			// 
			this->divide_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide_button->Location = System::Drawing::Point(178, 105);
			this->divide_button->Name = L"divide_button";
			this->divide_button->Size = System::Drawing::Size(42, 42);
			this->divide_button->TabIndex = 19;
			this->divide_button->Text = L"/";
			this->divide_button->UseVisualStyleBackColor = true;
			this->divide_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// multiply_button
			// 
			this->multiply_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply_button->Location = System::Drawing::Point(178, 153);
			this->multiply_button->Name = L"multiply_button";
			this->multiply_button->Size = System::Drawing::Size(42, 42);
			this->multiply_button->TabIndex = 20;
			this->multiply_button->Text = L"X";
			this->multiply_button->UseVisualStyleBackColor = true;
			// 
			// subtract_button
			// 
			this->subtract_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract_button->Location = System::Drawing::Point(178, 202);
			this->subtract_button->Name = L"subtract_button";
			this->subtract_button->Size = System::Drawing::Size(42, 42);
			this->subtract_button->TabIndex = 21;
			this->subtract_button->Text = L"-";
			this->subtract_button->UseVisualStyleBackColor = true;
			// 
			// add_button
			// 
			this->add_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_button->Location = System::Drawing::Point(178, 250);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(42, 42);
			this->add_button->TabIndex = 22;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = true;
			// 
			// equals_button
			// 
			this->equals_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals_button->Location = System::Drawing::Point(178, 299);
			this->equals_button->Name = L"equals_button";
			this->equals_button->Size = System::Drawing::Size(42, 42);
			this->equals_button->TabIndex = 23;
			this->equals_button->Text = L"=";
			this->equals_button->UseVisualStyleBackColor = true;
			// 
			// clear_button
			// 
			this->clear_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_button->Location = System::Drawing::Point(34, 250);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(42, 42);
			this->clear_button->TabIndex = 24;
			this->clear_button->Text = L"C";
			this->clear_button->UseVisualStyleBackColor = true;
			// 
			// dec_button
			// 
			this->dec_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dec_button->Location = System::Drawing::Point(130, 250);
			this->dec_button->Name = L"dec_button";
			this->dec_button->Size = System::Drawing::Size(42, 42);
			this->dec_button->TabIndex = 25;
			this->dec_button->Text = L".";
			this->dec_button->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(260, 393);
			this->Controls->Add(this->dec_button);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->equals_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->subtract_button);
			this->Controls->Add(this->multiply_button);
			this->Controls->Add(this->divide_button);
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
			this->Controls->Add(this->main_display);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void one_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
