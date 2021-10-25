//Check whether a year is leap year or not
//A year is a leap year if it is divisible by 4
//if it is a century year like 2000,3000, then it has to be divisible by 400
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year:";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"Leap year";
            }
            else
            {
                cout<<"not";
            }
        }
        else
        {
            cout<<"Leap year";
        }
    }
    else
    {
        cout<<"Not a leap year:";
    }

    return 0;
}