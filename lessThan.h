/**
 * File: lessThan.h
 * Author: John M. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Peforms the logical Less Than operation on two Expression Objects. Returns an integer 1 if true.
 */
class LessThan: public SubExpression
{
public:
    LessThan(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() < right->evaluate();
    }
};