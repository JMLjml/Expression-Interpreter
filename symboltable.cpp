/**
 * File: symboltable.cpp
 * Author: UMUC Faculty, Modified by John N. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * The symbol table stores the varibales and their correspnding values from the expression input for later
 * use withiin the compuation of the epxression.
 */
#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"


void SymbolTable::insert(string variable, int value)
{
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

int SymbolTable::lookUp(string variable) const
{
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
    return -1;
}

void SymbolTable::init()
{
	if(elements.size() > 0)
	{
		for(int i = elements.size(); i > 0; i--) {
			elements.pop_back();
		}
	}
}