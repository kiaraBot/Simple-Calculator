// Alix Field	afield@cnm.edu	FieldP2
			//SimpleCalc.cpp

#include "SimpleCalc.h"

//Constructor 
SimpleCalc::SimpleCalc()
{
	operation = '+';
	thing1 = 0.0;
	thing2 = 0.0;
	answer = 0.0;
	result = "";
	desc = "";
}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
	operation = oper;
	thing1 = op1;
	thing2 = op2;
	answer = 0.0;
	desc = "";
	

	Calculate();
}

void SimpleCalc::Calculate()
{
	if (operation == '+')
	{
		answer = thing1 + thing2;
		desc = "\n\nYour operation is addition: ";
	}
	else if (operation == '-')
	{
		answer = thing1 - thing2;
		desc = "\n\nYour operation is subtraction: ";
	}
	else if (operation == '/')
	{
		if (thing2 == 0.0)
		{
			desc = "\n\nYour operation is dividsion: Illegal Operation! ";
		}
		else
		{
			answer = thing1 / thing2;
			desc = "\n\nYour operation is division: ";
		}
	}
	else if (operation == '*')
	{
		answer = thing1 * thing2;
		desc = "\n\nYour operation is multiplication: ";
	}
}

string SimpleCalc::GetResults()
{
	stringstream sayWhat;

	if (thing2 == 0.0 && operation == '/')
	{
		sayWhat << desc;
	}
	else
	{
		sayWhat << desc;
		sayWhat << thing1 << " " << operation << " " << thing2 << " = " << answer;
	}
	result = sayWhat.str();
	return result;
}