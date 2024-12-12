#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	string fullName, bankName, date;
	double loanAmount, annualRate;
	int term;

	cout << "Loan Payment Calculator..." << endl; 
	cout << endl;

	cout << "Please Enter The Followimg Information: " << endl;
	cout << endl;

	cout << left << setw(28) << "Borrower's name:  "  << fullName;
	cin.ignore();
	getline(cin, fullName);

	cout << left << setw(28) << "Loaning institution: " << bankName;
	cin.ignore();
	getline(cin, bankName);
	cout << endl;

	cout << left << setw(28) << "Loan Amount ($): ";
	cin >> loanAmount;
	cout << endl;

	cout << left << setw(28) << "Annual Interest Rate (%): ";
	cin >> annualRate;

	cout << left << setw(28) << "Term of Loan (years): ";
	cin >> term;
	cout << endl;

	cout << left << setw(28) << "Date of Report: ";
	cin.ignore();
	getline(cin, date);
	cout << endl;


	cout << "---------------------------------" << endl;

	cout << "Loan Payment Summary Report" << endl;
	cout << endl;

	cout << left << setw(28) << bankName << left << setw(28) << fullName << endl;

	cout << left << setw(28) << "Annual Interest Rate: " << annualRate << "%" << endl;

	cout << left << setw(28) << "Date: " << date << endl;

	cout << endl;

	cout << fixed << setprecision(2);
	cout << left << setw(28) << "Loan Amount: " << "$" << loanAmount << endl;

	cout << fixed << setprecision(2);
	double monthlyRate = (annualRate / 12) / 100;
	cout << left << setw(28) << "Monthly Interest Rate: " << fixed << setprecision(2) << monthlyRate * 100 << "%" << endl;

	int numberOfPayments = term * 12;
	cout << left << setw(28) << "Number of Payments: " << numberOfPayments << endl;

	double monthlyPayment = loanAmount * (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) / (pow(1 + monthlyRate, numberOfPayments) - 1);
	cout << left << setw(28) << "Monthly Payment: " << "$" << monthlyPayment << endl;
	cout << endl;

	double totalAmount = monthlyPayment * numberOfPayments;
	cout << left << setw(28) << "Total Amount to Pay: " << "$" << totalAmount << endl;

	double totalInterest = totalAmount - loanAmount;
	cout << left << setw(28) << "Total Interest: " << "$" << totalInterest << endl;

	return 0;
}