// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

// accountproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	char choice;
	float sBalance;
	float depAmount;
	float witAmount;
	float cheAmount;
	float totDeposits = 0, totChecks = 0, totWithdrawal = 0;
	float curBalance = 0;


	cout << "Please Enter a Starting Balance" << endl;
	cin >> sBalance;
	curBalance += sBalance;
	cout << "Your starting balance is: $" << sBalance << endl;


	do

	{
		cout << "would you like to Deposit, Scan checks, Withdraw, or quit and view summary? 'D' 'C' 'W' 'Q'" << endl;
		cin >> choice;




		switch (choice)

		{
		case'D':
		case'd':
			cout << "How much do you want to deposit" << endl;
			cin >> depAmount;
			curBalance += depAmount;
			cout << "Your current balance is: $" << curBalance << endl;
			break;


		case 'C':
		case 'c':
			cout << "What is the Check amount you wish to deposit" << endl;
			cin >> cheAmount;
			curBalance += cheAmount;
			cout << "Your current balance is: $" << curBalance << endl;
			break;


		case'W':
		case'w':
			cout << "How much do you want to withdraw" << endl;
			cin >> witAmount;
			if (witAmount > curBalance)
			{
				cout << "You have insufficient funds" << endl;


			}

			else
			{
				curBalance -= witAmount;
				cout << "Your current balance is: $" << curBalance << endl;
			}

			break;


		case'Q':
		case'q':

			break;







		default:
			cout << "Invalid option" << endl;
			break;
		}


		if (choice == 'D' || choice == 'd')
		{
			totDeposits += depAmount;
		}

		else if
			(choice == 'W' || choice == 'w')
		{
			totWithdrawal += witAmount;
		}

		else if
			(choice == 'C' || choice == 'c')
		{
			totChecks += cheAmount;
		}

	} while (choice != 'q');


	//format the following properly

	//cout.setf(ios::right);

	cout << setw(30) << "your starting balance was:" << setw(30) << right << setprecision(2)<< fixed << "$" << sBalance << std::endl;
	cout << setw(30) << "your total deposits are:" << setw(30) << right << setprecision(2) << fixed << "$" <<  totDeposits << std::endl;
	cout << setw(30) << "your total withdrawals are:" << setw(30) << right << setprecision(2) << fixed << "$" << totWithdrawal << std::endl;
	cout << setw(30) << "your total checks are:" << setw(30) << right << setprecision(2) << fixed << "$" << totChecks << std::endl;
	cout << setw(30) << "your current balance is:" << setw(30) << right << setprecision(2) << fixed << "$" << curBalance << std::endl;




	return 0;
}




