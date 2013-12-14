/**
 * File: ternary.h
 * Author: John M. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Returns the results of the left subEpxression if the conitional subExpression evaluates to true, 
 * returns the results of the right subExpression otherwise.
 */
class Ternary: public SubExpression
{
public:
    Ternary(Expression* left, Expression* right, Expression* condition): SubExpression(left, right)
    {
		this->condition = condition;
    }
    int evaluate()
    {
		return condition->evaluate() ? left->evaluate() : right->evaluate();
    }

private:
	Expression* condition;
};