/**
 * File: literal.h
 * Author: UMUC Faculty
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Class designed to hold literal integer values used in computation in conjuction with other subExpressions
 * in the Expression Intepreter.
 */
class Literal: public Operand
{
public:
    Literal(int value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    int value;
};