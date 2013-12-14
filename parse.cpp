/**
 * File: parse.cpp
 * Author: UMUC Faculty
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * The Parse class is a utility class designed to help parse out variable names from an expression input source.
 */
#include <cctype>
#include <iostream>
#include <sstream>

#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in)
{
    char alnum;
    string name = "";

    in >> ws;
    while (isalnum(in.peek()))
    {
        in >> alnum;
        name += alnum;
    }
    return name;
}