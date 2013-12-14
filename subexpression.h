/**
 * File: subexpression.h
 * Author: UMUC Faculty
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * The SubExpression class defines the node of a binary expression tree used for evaluating matematical expressions. The parse method
 * uses a switch statement to determine which of the sub classes of SubExpression should be called to evaluate the statement.
 */
class SubExpression: public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(stringstream& in);
protected: 
    Expression* left;
    Expression* right;
};    