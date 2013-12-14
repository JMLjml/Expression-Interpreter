/**
 * File: times.h
 * Author: John M. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Peforms an integer multiplication operation on two Expression Objects.
 */
class Times: public SubExpression
{
public:
    Times(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() * right->evaluate();
    }
};