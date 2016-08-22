#pragma once

namespace FinalProjectVSM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for receiptPage
	/// </summary>
	public ref class receiptPage : public System::Windows::Forms::Form
	{
	public:
		receiptPage(System::Windows::Forms::Form^ buy, System::Windows::Forms::Form^ home)
		{
			InitializeComponent();
			this->buy = buy;
			this->homePage = home;

			//this->date->Text = date;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~receiptPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  date;
	public: System::Windows::Forms::Label^  nyseSymbol;
	public: System::Windows::Forms::Label^  nbOfShares;
	public: System::Windows::Forms::Label^  totalPrice;
	private: System::Windows::Forms::Button^  home;
	public: System::Windows::Forms::Form^  homePage;
	public: System::Windows::Forms::Form^  buy;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->date = (gcnew System::Windows::Forms::Label());
			this->nyseSymbol = (gcnew System::Windows::Forms::Label());
			this->nbOfShares = (gcnew System::Windows::Forms::Label());
			this->totalPrice = (gcnew System::Windows::Forms::Label());
			this->home = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Receipt";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"NYSE symbol";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of shares";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total price";
			// 
			// date
			// 
			this->date->AutoSize = true;
			this->date->Location = System::Drawing::Point(109, 34);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(35, 13);
			this->date->TabIndex = 5;
			this->date->Text = L"label6";
			// 
			// nyseSymbol
			// 
			this->nyseSymbol->AutoSize = true;
			this->nyseSymbol->Location = System::Drawing::Point(109, 51);
			this->nyseSymbol->Name = L"nyseSymbol";
			this->nyseSymbol->Size = System::Drawing::Size(35, 13);
			this->nyseSymbol->TabIndex = 6;
			this->nyseSymbol->Text = L"label7";
			// 
			// nbOfShares
			// 
			this->nbOfShares->AutoSize = true;
			this->nbOfShares->Location = System::Drawing::Point(110, 68);
			this->nbOfShares->Name = L"nbOfShares";
			this->nbOfShares->Size = System::Drawing::Size(35, 13);
			this->nbOfShares->TabIndex = 7;
			this->nbOfShares->Text = L"label8";
			// 
			// totalPrice
			// 
			this->totalPrice->AutoSize = true;
			this->totalPrice->Location = System::Drawing::Point(110, 84);
			this->totalPrice->Name = L"totalPrice";
			this->totalPrice->Size = System::Drawing::Size(35, 13);
			this->totalPrice->TabIndex = 8;
			this->totalPrice->Text = L"label9";
			// 
			// home
			// 
			this->home->Location = System::Drawing::Point(187, 223);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(75, 23);
			this->home->TabIndex = 9;
			this->home->Text = L"Continue";
			this->home->UseVisualStyleBackColor = true;
			this->home->Click += gcnew System::EventHandler(this, &receiptPage::home_Click);
			// 
			// receiptPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->home);
			this->Controls->Add(this->totalPrice);
			this->Controls->Add(this->nbOfShares);
			this->Controls->Add(this->nyseSymbol);
			this->Controls->Add(this->date);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"receiptPage";
			this->Text = L"VSM - Receipt";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void home_Click(System::Object^  sender, System::EventArgs^  e) {
		this->homePage->Show();
		this->Hide(); 
	}
	};
}
