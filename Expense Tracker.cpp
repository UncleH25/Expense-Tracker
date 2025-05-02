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
    

    return 0;
}