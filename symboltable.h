/**
 * File: symboltable.h
 * Author: UMUC Faculty, Modified by John N. Lasheski
 * Date: December 7, 2013
 * Platform: Windows 8, Microsoft Visual Studio Express 2012 for Windows Desktop 
 * 
 * Class: UMUC CMSC 330, Section 7981
 * Project: 2
 * 
 * The symbol table stores the varibales and their correspnding values from the expression input for later
 * use withiin the compuation of the epxression.
 */
class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, int value);
    int lookUp(string variable) const;
	void init();
private:
    struct Symbol
    {
        Symbol(string variable, int value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        int value;
    };
    vector<Symbol> elements;
};


