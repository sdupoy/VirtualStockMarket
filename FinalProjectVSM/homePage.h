#pragma once

#include "buyForm.h"
#include "sellForm.h"

namespace FinalProjectVSM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for homePage
	/// </summary>
	public ref class homePage : public System::Windows::Forms::Form
	{
	public:
		homePage()
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
		~homePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buyButton;
	private: System::Windows::Forms::Button^  sellButton;
	private: System::Windows::Forms::Button^  exit;
	public: System::Windows::Forms::Label^  pin;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buyButton = (gcnew System::Windows::Forms::Button());
			this->sellButton = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->pin = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to the VSM";
			// 
			// buyButton
			// 
			this->buyButton->Location = System::Drawing::Point(56, 176);
			this->buyButton->Name = L"buyButton";
			this->buyButton->Size = System::Drawing::Size(75, 23);
			this->buyButton->TabIndex = 1;
			this->buyButton->Text = L"Buy";
			this->buyButton->UseVisualStyleBackColor = true;
			this->buyButton->Click += gcnew System::EventHandler(this, &homePage::buyButton_Click);
			// 
			// sellButton
			// 
			this->sellButton->Location = System::Drawing::Point(148, 176);
			this->sellButton->Name = L"sellButton";
			this->sellButton->Size = System::Drawing::Size(75, 23);
			this->sellButton->TabIndex = 2;
			this->sellButton->Text = L"Sell";
			this->sellButton->UseVisualStyleBackColor = true;
			this->sellButton->Click += gcnew System::EventHandler(this, &homePage::sellButton_Click);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(102, 215);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(75, 23);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Log out";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &homePage::exit_Click);
			// 
			// pin
			// 
			this->pin->AutoSize = true;
			this->pin->Location = System::Drawing::Point(13, 13);
			this->pin->Name = L"pin";
			this->pin->Size = System::Drawing::Size(35, 13);
			this->pin->TabIndex = 4;
			this->pin->Text = L"label2";
			// 
			// homePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pin);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->sellButton);
			this->Controls->Add(this->buyButton);
			this->Controls->Add(this->label1);
			this->Name = L"homePage";
			this->Text = L"VSM - Home";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void buyButton_Click(System::Object^  sender, System::EventArgs^  e) {
		buyForm^ buy = gcnew buyForm(this);
		buy->pin->Text = this->pin->Text;
		this->Hide();
		buy->Show();
	}
	private: System::Void sellButton_Click(System::Object^  sender, System::EventArgs^  e) {
		sellForm^ sell = gcnew sellForm(this);
		sell->pin->Text = this->pin->Text;
		this->Hide();
		sell->Show();
	}
	};
}
