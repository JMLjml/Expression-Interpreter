/**
 * File: expression.h
 * Author: UMUC Faculty
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * Abstract class used to facilitate the derivation of specialized subExpression Objects.
 */
class Expression
{
public: 
    virtual int evaluate() = 0;
};