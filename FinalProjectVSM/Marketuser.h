#pragma once
#ifndef DATE_H
#define DATE_H
namespace FinalProjectVSM {
	public ref class Marketuser {
		System::String^ pin;
		System::Double balance;

	public:
		Marketuser();
		void setValues(System::String^, System::Double);
		System::String^ getPin();
		System::Double getBalance();
		void creditBalance(System::Double);
		void debitBalance(System::Double);
	};
};

#endif