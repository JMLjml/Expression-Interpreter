/**
 * File: negation.h
 * Author: John M. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Peforms the Logical Not operation on an Expression Object. The second subExpression passed as an argument is always ignored.
 */
class Negation: public SubExpression
{
public:
    Negation(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return !(left->evaluate());
    }
};