#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter a: ";
    cin>>a;

    //cout<<"Enter b: ";
    //cin>>b;

    if(a>0)
    {
        cout<<"a is positive";
    }
    else if(a<0)
    {
        cout<<"a is negative";
    }
    else
    {
        cout<<"a is 0";
    }
}