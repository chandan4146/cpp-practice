// To check whether a number is prime or not, we can use the following C++ code:
#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    int num;
    cout<<"enter a number:";
    cin>>num;
    if(num<2)
    {
        cout<<"not prime";
    }
    else
    {
        for(int i=2; i<num; i++)
        {
            if(num%i==0)
            {
                cout<<"not prime";
                return 0;
            }   
        }
        cout<<"prime";
        return 0;

    }
 }