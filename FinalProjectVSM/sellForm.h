#pragma once
#include <msclr/marshal_cppstd.h>
#include "fileHandler.h"
#include "receiptPage.h"
namespace FinalProjectVSM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sellForm
	/// </summary>
	public ref class sellForm : public System::Windows::Forms::Form
	{
	public:
		sellForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		sellForm(System::Windows::Forms::Form^ home)
		{
			InitializeComponent();
			this->home = home;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~sellForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Label^  pin;
	protected:

	public: System::Windows::Forms::Form^  home;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  nyseSymbol;
	private: System::Windows::Forms::TextBox^  nbOfShares;
	private: System::Windows::Forms::TextBox^  unitPrice;
	private: System::Windows::Forms::DateTimePicker^  dateOfSale;
	private: System::Windows::Forms::Button^  submitSale;
	private: System::Windows::Forms::Button^  cancel;



	protected:

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
			this->pin = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nyseSymbol = (gcnew System::Windows::Forms::TextBox());
			this->nbOfShares = (gcnew System::Windows::Forms::TextBox());
			this->unitPrice = (gcnew System::Windows::Forms::TextBox());
			this->dateOfSale = (gcnew System::Windows::Forms::DateTimePicker());
			this->submitSale = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// pin
			// 
			this->pin->AutoSize = true;
			this->pin->Location = System::Drawing::Point(13, 13);
			this->pin->Name = L"pin";
			this->pin->Size = System::Drawing::Size(35, 13);
			this->pin->TabIndex = 0;
			this->pin->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NYSE symbol";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Price per share";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of shares";
			// 
			// nyseSymbol
			// 
			this->nyseSymbol->Location = System::Drawing::Point(117, 57);
			this->nyseSymbol->Name = L"nyseSymbol";
			this->nyseSymbol->Size = System::Drawing::Size(100, 20);
			this->nyseSymbol->TabIndex = 4;
			// 
			// nbOfShares
			// 
			this->nbOfShares->Location = System::Drawing::Point(117, 85);
			this->nbOfShares->Name = L"nbOfShares";
			this->nbOfShares->Size = System::Drawing::Size(100, 20);
			this->nbOfShares->TabIndex = 5;
			// 
			// unitPrice
			// 
			this->unitPrice->Location = System::Drawing::Point(117, 114);
			this->unitPrice->Name = L"unitPrice";
			this->unitPrice->Size = System::Drawing::Size(100, 20);
			this->unitPrice->TabIndex = 6;
			// 
			// dateOfPurchase
			// 
			this->dateOfSale->Location = System::Drawing::Point(17, 152);
			this->dateOfSale->Name = L"dateOfSale";
			this->dateOfSale->Size = System::Drawing::Size(200, 20);
			this->dateOfSale->TabIndex = 7;
			// 
			// submitSale
			// 
			this->submitSale->Location = System::Drawing::Point(117, 225);
			this->submitSale->Name = L"submitSale";
			this->submitSale->Size = System::Drawing::Size(75, 23);
			this->submitSale->TabIndex = 8;
			this->submitSale->Text = L"Sell";
			this->submitSale->UseVisualStyleBackColor = true;
			this->submitSale->Click += gcnew System::EventHandler(this, &sellForm::submitSale_Click);
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(198, 225);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(75, 23);
			this->cancel->TabIndex = 9;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &sellForm::cancel_Click);
			// 
			// buyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submitSale);
			this->Controls->Add(this->dateOfSale);
			this->Controls->Add(this->unitPrice);
			this->Controls->Add(this->nbOfShares);
			this->Controls->Add(this->nyseSymbol);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pin);
			this->Name = L"sellForm";
			this->Text = L"VSM - Sell";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Cancel the sale and go back to home
	private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->home->Show();
		this->Hide();
	}

	// Submitting sale, registering it in history and updating user's balance. Then display a receipt
	private: System::Void submitSale_Click(System::Object^  sender, System::EventArgs^  e) {

		if (this->nyseSymbol->Text != "" && this->nbOfShares->Text != "" && this->unitPrice->Text != "" && this->dateOfSale->Text != "") {

			// Converting data to save it on history file
			int qty = Int32::Parse(nbOfShares->Text);
			float pr = (float)(Convert::ToDouble(unitPrice->Text));
			float totalRevenu = 0.9*qty*pr;
			msclr::interop::marshal_context context2;
			std::string date = context2.marshal_as<std::string>(dateOfSale->Text->ToString());
			std::string nyseS = context2.marshal_as<std::string>(nyseSymbol->Text->ToString());
			std::string p = context2.marshal_as<std::string>(pin->Text->ToString());
			std::string qtyS = context2.marshal_as<std::string>(nbOfShares->Text->ToString());
			std::string prS = context2.marshal_as<std::string>(unitPrice->Text->ToString());
			std::string trn = "Sale transaction by " + p + ": " + date + " regarding " + nyseS + ", " + qtyS + " shares ($ " + prS + " per share), for a total of $ " + std::to_string(totalRevenu) + ".";
			recordTransaction(trn);

			// Updating the balance of the user
			creditBalance(p, totalRevenu);

			// Displaying input on the receipt
			receiptPage^ receipt = gcnew receiptPage(this, this->home);
			receipt->nyseSymbol->Text = this->nyseSymbol->Text;
			receipt->nbOfShares->Text = this->nbOfShares->Text;
			receipt->date->Text = this->dateOfSale->Text;
			receipt->totalPrice->Text = totalRevenu.ToString();

			// Showing the receipt form
			this->Hide();
			receipt->Show();
		}

	}
	};
}
