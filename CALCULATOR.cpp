#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char choice='Y';
    cout<<"WELCOME TO OUR CALCULATOR"<<endl;
    while(choice=='Y'||choice=='y')
    {
        double number1=0;
        double number2=0;
        char operation;
        cout<<"Enter the Number 1:";
        cin>>number1;
        cout<<"Enter the Number 2:";
        cin>>number2;
        cout<<"Enter your Operation(+,-,*,/,%):";
        cin>>operation;
        if(operation=='+')
        {
            cout<<"Answer:"<<number1<<"+"<<number2<<"="<<number1+number2<<endl;
        }
        else if(operation=='-')
        {
            cout<<"Answer:"<<number1<<"-"<<number2<<"="<<number1-number2<<endl;
        }
        else if(operation=='*')
        {
            cout<<"Answer:"<<number1<<"*"<<number2<<"="<<number1*number2<<endl;
        }
        else if(operation=='/')
        {
            if(number2==0)
            {
                cout<<"Can't Divide by Zero";
            }
            else
            {
                cout<<"Answer:"<<number1<<"/"<<number2<<"="<<number1/number2<<endl;
            }
        }
        else if(operation=='%')
        {
            if(number2==0)
            {
                cout<<"Modulus by Zeo not Allowed"<<endl;
            }
            else
            {
                cout<<"Answer:"<<number1<<"%"<<number2<<"="<<fmod(number1,number2)<<endl;
            }
        }
        else
        {
            cout<<"Please enter a valid operator"<<endl;
        }
        cout<<"Do you want calculate again:";
        cin>>choice;
    }   
}