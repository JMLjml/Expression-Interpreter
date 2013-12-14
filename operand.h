/**
 * File: operand.h
 * Author: UMUC Faculty
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * The Operand class defines the leaf nodes of what will be an expression tree constructed by the Expression Intepreter
 * for the evaluation of mathematical expressions. The Operand class contains the method parse that returns either a literal operand or a variable
 * operand.
 */
class Operand: public Expression
{
public:
    static Expression* parse(stringstream& in);
};
