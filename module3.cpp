/**
 * File: module3.cpp
 * Author: UMUC Faculty, Modified by John N. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Contains the main method for the Expression Interpreter program. The program reads in expression from the file "input.txt"
 * and then parses the expressions. The program creates a binary expression tree and then computes the the intger result of the expression.
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main()
{
	const int SIZE = 256;
    Expression* expression;
    char paren, comma, line[SIZE];
    
	ifstream fin("input.txt");

	while(true)
	{
		symbolTable.init();
		fin.getline(line, SIZE);
		if(!fin) break;

		stringstream in(line, ios_base::in);

		in >> paren;
		cout << line << " ";

		try
		{
			expression = SubExpression::parse(in);
			in >> comma;
			parseAssignments(in);
			cout << "Value = " << expression->evaluate() << endl;
		} catch(exception) {
			return EXIT_FAILURE;
		}
	}
	return 0;    
}

void parseAssignments(stringstream& in)
{
    char assignop, delimiter;
    string variable;
    int value;
    do
    {
        variable = parseName(in);
        in >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
   
