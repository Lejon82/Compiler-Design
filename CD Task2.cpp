#include <iostream>
#include <string>
using namespace std;

bool isOperator (char a){
           return (a == '+' || a == '-' || a == '*' || a =='/');
}


void listOperators (string expression)
{
    cout<<" Arithmetic operators in the Expression: ";

    for (int i=0; i<expression.length();i++)
    {
        if (isOperator(expression[i])) {
            cout<< expression [i]<<" ";
        }
    }
    cout<<endl;
}

int main ()
{
    string expression;
    cout<<" enter an expression: ";
    getline (cin, expression);
    listOperators (expression);
    return 0;
}

