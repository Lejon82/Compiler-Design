#include <iostream>
#include <string>
using namespace std;


bool isNumeric (string input);


bool numeric = true

    for (int i =0; i< input.length();i++)
    {
        if(input[i]<'0'||input[i]>'9'){

           numeric=false;
           break
        }
    }
    return numeric ;


int main ()
{
    string input;
    cout<<"Enter string: ";
    cin>>input;

    bool numeric = isNumeric (input);

    if(numeric){

        cout<<"It's a Numeric number"<<endl;


    }

    else
    {
        cout<<"it's a Non-numeric number"<<endl;
    }

    return 0;
}

