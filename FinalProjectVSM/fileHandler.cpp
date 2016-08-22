
#include <iostream>
#include <fstream>
#include <string>
#include "fileHandler.h"


using namespace std;

bool isInFile(string pin) {

	// Reading the file
	ifstream fileStream;
	fileStream.open("users.txt", ios::in);
	string bufferLine;
	bool result = false;
	for (string bufferLine; getline(fileStream, bufferLine); )
	{
		if (bufferLine == pin) {
			result = true;
		}
	}

	return result;
	/*
	while (!fileStream.eof()) {
	fileStream.get(bufferChar);
	if (bufferChar == '>') {
	fileStream.get(bufferChar);
	if (bufferChar == '>') {
	authors[i++].assign(bufferString);
	bufferString.clear();
	}
	}
	else {
	bufferString += bufferChar;
	}
	}
	fileStream.close();
	cout << "File closed!" << endl;
	*/

}

float getBalancePin(string pin) {
	// Reading the file
	ifstream fileStream;
	fileStream.open("users.txt", ios::in);
	string bufferLine;
	float balance = 0.00;
	for (string bufferLine; getline(fileStream, bufferLine); )
	{
		if (bufferLine == pin) {
			getline(fileStream, bufferLine);
			balance = stof(bufferLine);
		}
	}

	return balance;
}


void recordTransaction(std::string transaction) {
	std::ofstream history;
	
	// Clearing the file and write the ordered data in it
	history.open("history.txt", std::ios_base::app);
	history << transaction << endl;
	history.close();
}

void debitBalance(string pin, float amount) {
	ifstream fileStream;
	fileStream.open("users.txt", ios::in);
	ofstream outputFile;
	// Clearing the temp file
	outputFile.open("temp.txt", ofstream::trunc);

	// Reading the users.txt file, copying into a temp file and updating the balanc of the user.
	string bufferLine;
	for (bufferLine; getline(fileStream, bufferLine); )
	{
		
		if (bufferLine == pin) {
			outputFile << bufferLine << endl;
			getline(fileStream, bufferLine);
			float newBalance = stof(bufferLine) - amount;
			outputFile << newBalance << endl;
		}
		else {
			outputFile << bufferLine << endl;
		}
	}
	outputFile.close();
	fileStream.close();


	ofstream fileStreamToUpdate;
	ifstream outputFileToCopy;
	// Copying the temp data into the users.txt file
	fileStreamToUpdate.open("users.txt", ofstream::trunc);
	outputFileToCopy.open("temp.txt", ios::in);
	for (bufferLine; getline(outputFileToCopy, bufferLine); )
	{
		fileStreamToUpdate << bufferLine << endl;
	}
	outputFile.close();
	fileStream.close();
}

void creditBalance(string pin, float amount) {
	ifstream fileStream;
	fileStream.open("users.txt", ios::in);
	ofstream outputFile;
	// Clearing the temp file
	outputFile.open("temp.txt", ofstream::trunc);

	// Reading the users.txt file, copying into a temp file and updating the balanc of the user.
	string bufferLine;
	for (bufferLine; getline(fileStream, bufferLine); )
	{

		if (bufferLine == pin) {
			outputFile << bufferLine << endl;
			getline(fileStream, bufferLine);
			float newBalance = stof(bufferLine) + amount;
			outputFile << newBalance << endl;
		}
		else {
			outputFile << bufferLine << endl;
		}
	}
	outputFile.close();
	fileStream.close();


	ofstream fileStreamToUpdate;
	ifstream outputFileToCopy;
	// Copying the temp data into the users.txt file
	fileStreamToUpdate.open("users.txt", ofstream::trunc);
	outputFileToCopy.open("temp.txt", ios::in);
	for (bufferLine; getline(outputFileToCopy, bufferLine); )
	{
		fileStreamToUpdate << bufferLine << endl;
	}
	outputFile.close();
	fileStream.close();
}

