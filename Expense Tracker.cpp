#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //Variable
	const double VAT_RATE = 0.15;

	//Read the data in expenses.txt
	fstream inData("expenses.txt", ios::in);
	//Create a file called receipt.txt and write the data in it
	ofstream outData("receipt.txt", ios::out);

	//Variables
	string category;
	double amount;

	//Check if the file opened successfully or exists
	if (!inData)
	{
		cout << "Error opening file." << endl;
		return 1;
	}

	//Output
	outData << fixed << setprecision(2);
	outData << left << setw(15) << "Category: " 
		    << right << setw(10) << "Amount: "
		    << setw(10) << "VAT: "
			<< setw(10) << "Total: " << endl;
	outData << string(45, '-') << endl;

	//Variable to store total expense amount
	double totalExpense = 0.0;

	//Read the data from the file and calculate VAT and total
	while (inData >> category >> amount)
	{
		//Calculate VAT and total
		double vat = amount * VAT_RATE;
		double total = amount + vat;
		totalExpense += total;

		//Write the data to the receipt file
		outData << left << setw(15) << category
			<< right << setw(10) << amount
			<< setw(10) << vat
			<< setw(10) << total << endl;
	}

	//Display the total expense
	outData << string(45, '-') << endl;
	outData << left << setw(15) << "Total Expense: "
			<< right << setw(10) << totalExpense << endl;

	//Close the files
	inData.close();
	outData.close();

	//Display the message
	cout << "Receipt generated successfully in receipt.txt" << endl;


    return 0;
}