#pragma once


#include <string>
#include <msclr/marshal_cppstd.h>
#include "fileHandler.h"
#include "homePage.h"

namespace FinalProjectVSM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for logInForm
	/// </summary>
	public ref class logInForm : public System::Windows::Forms::Form
	{
	public:
		logInForm(void)
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
		~logInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  logInButton;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  pin;


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
			this->logInButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pin = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// logInButton
			// 
			this->logInButton->Location = System::Drawing::Point(115, 160);
			this->logInButton->Name = L"logInButton";
			this->logInButton->Size = System::Drawing::Size(75, 23);
			this->logInButton->TabIndex = 0;
			this->logInButton->Text = L"Log In";
			this->logInButton->UseVisualStyleBackColor = true;
			this->logInButton->Click += gcnew System::EventHandler(this, &logInForm::logInButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Virtual Stock Market";
			// 
			// pin
			// 
			this->pin->Location = System::Drawing::Point(100, 90);
			this->pin->MaxLength = 4;
			this->pin->Name = L"pin";
			this->pin->Size = System::Drawing::Size(100, 20);
			this->pin->TabIndex = 2;
			// 
			// logInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->logInButton);
			this->Name = L"logInForm";
			this->Text = L"VSM - Log in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void logInButton_Click(System::Object^  sender, System::EventArgs^  e) {

		msclr::interop::marshal_context context;
		std::string inputPin = context.marshal_as<std::string>(this->pin->Text);

		if (stoi(inputPin) > 0007 && stoi(inputPin) < 7777) {
			if (isInFile(inputPin) && getBalancePin(inputPin) >= 5000.00) {
				homePage^ home = gcnew homePage();
				home->pin->Text = this->pin->Text;
				this->Hide();
				home->Show();
			}
			else if (isInFile(inputPin) && getBalancePin(inputPin) < 5000.00) {
				System::Windows::Forms::MessageBox::Show("Please deposit some cash ! You're under $ 5000.00");
			}
			else {
				System::Windows::Forms::MessageBox::Show("Invalid PIN !");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Invalid PIN !");
		}

	}
	};
}
