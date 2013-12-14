/**
 * File: variable.h
 * Author: UMUC Faculty
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Class used to store variables as a leaf node of a binary expression tree. Stores a name and integer value.
 */
class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};