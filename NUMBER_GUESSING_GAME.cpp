#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    char choice='Y';
    while(choice=='Y'||choice=='y')
    {
     srand(time(0));
     int secret_number=rand()%100+1;
     int user_guess=0;
     int attempts=0;
     cout<<"I Choose some number from 1 to 100.Try to Guess it"<<endl;
     while(secret_number!=user_guess)
     {
        cout<<"Enter your Guess(1-100):";
        cin>>user_guess;
        attempts++;
        if(user_guess==secret_number)
        {
            cout<<"YOU WON"<<endl;
            cout<<"Number of attempts="<<attempts<<endl;
        }
        else if(secret_number>user_guess)
        {
            cout<<"Higher"<<endl;
        }
        else
        {
            cout<<"Lower"<<endl;
        }
     }
        cout<<"Do you want Play again(Y/N)";
        cin>>choice;
    }
    cout<<"Thanks for Playing"<<endl;
    return 0;
}