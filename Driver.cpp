//Alix Field	afield@cnm.edu	SimpleCalcP2
				//Driver.cpp

#include "SimpleCalc.h"

int main()
{
	//Variable /Object Declerations
	char oper = '+';
	string answer = "y";
	double thing1 = 1.0;
	double thing2 = 1.0;
	string theResults = " ";
	SimpleCalc barbrasBrother;

	//Class Header
	cout << "\nAlix Field "
		<< "\nC++ Programming II   2275.102 "
		<< "\nSimple Calculation Program "
		<< "\nProgram Objectives: "
		<< "\n     *Creating a Class "
		<< "\n     *Creating an Object Using the "
		<< "\n      Newly Written Class"
		<< "\n     *Using a Default Constructor "
		<< "\n     *Private & Public Functions "
		<< "\n     *Creating an Object";
	cout << "\n\n          Simple Calculation Program";

	//Play Loop
	do
	{
		//Asking User for Equation Information
		cout << "\n\nEnter the operator (+, -, /, *): ";
		cin >> oper;
		cin.ignore();

		cout << "Enter first number in the equation: ";
		cin >> thing1;
		cin.ignore();

		cout << "Enter the second number in the equation: ";
		cin >> thing2;
		cin.ignore();

		barbrasBrother.SetOperation(oper, thing1, thing2);
		theResults = barbrasBrother.GetResults();
		cout << theResults;

		//Ask User to Play Again
		cout << "\n\n\nWould you like to calculate another equation (y/n)? ";
		getline(cin, answer);

	} while (answer == "y");

	//Goodbye
	cout << "\n\nThank you for using my Simple Calculation Program!! "
		<< "\n                ~* Goodbye *~ \n\n";

	return 0;
}
