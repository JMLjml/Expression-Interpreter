#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "or.h"
#include "and.h"
#include "equality.h"
#include "greaterThan.h"
#include "lessThan.h"
#include "ternary.h"
#include "negation.h"

SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}

Expression* SubExpression::parse(stringstream& in)
{
    Expression* left;
    Expression* right;
	Expression* condition;
    char operation, paren;
   

	/* I think this is the file where I need to build the three different types of <exp> */

	// When we get here we should have burnt a paren char
	//the next chars in has to be an operand

    left = Operand::parse(in);

	//at this point the next thing in could be an <op>, or ':' or '!'

	//this is where the switch goes

    in >> operation;
    
    switch (operation)
    {
        case '+': 
			right = Operand::parse(in);
			in >> paren;
			return new Plus(left, right);        		
		
		case '-': 
			right = Operand::parse(in);
			in >> paren;
			return new Minus(left, right);

		case '*': 
			right = Operand::parse(in);
			in >> paren;
			return new Times(left, right);
		
		case '/': 
			right = Operand::parse(in);
			in >> paren;
			return new Divide(left, right);

		case '|': 
			right = Operand::parse(in);
			in >> paren;
			return new Or(left, right);
		
		case '&': 
			right = Operand::parse(in);
			in >> paren;
			return new And(left, right);

		case '=': 
			right = Operand::parse(in);
			in >> paren;
			return new Equality(left, right);
		
		case '>': 
			right = Operand::parse(in);
			in >> paren;
			return new GreaterThan(left, right);
		
		case '<': 
			right = Operand::parse(in);
			in >> paren;
			return new LessThan(left, right);

		case ':':
			right = Operand::parse(in);
			in >> paren;// this char should acutaly be a '?'
			condition = Operand::parse(in);
			in >> paren;
			return new Ternary(left,right,condition);

		case '!':
			in >> paren;
			return new Negation(left,NULL);
    }
    return 0;
}
        