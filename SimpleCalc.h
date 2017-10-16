//Alix Field	afield@cnm.edu		FieldP2
			//SimpleCalc.h

#ifndef _SIMPLECALC_H
#define _SIMPLECALC_H
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class SimpleCalc
{
	//Private Variables and Function Declerations
	private:
		char operation;			//which arithmetic operation is chosen
		double thing1;				//User Number 1
		double thing2;				//User Number 2
		double answer;
		string result;
		string desc;				//Calculation Description
		void Calculate();
	
	//Public Function Declerations
	public:
		SimpleCalc();
		void SetOperation(char oper, double op1, double op2);
		string GetResults();
};
#endif