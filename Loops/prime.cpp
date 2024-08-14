#include<iostream>
using namespace std;

int main()
{
    int i=2;
    int n;
    cout<<"Enter the number: ";
    cin>>n;

        if(n%i==0)
        {
            cout<<"Not prime";
        }
        else
        {
            cout<<"Prime";
        }
        i=i+1;
}