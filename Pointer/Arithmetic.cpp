#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    int *t = &i;

    // cout<<(*t)++<<endl;
    *t = *t+1;
    cout<<*t<<endl;

    cout<<"Before t: "<<t<<endl;
    t = t+1;
    cout<<"After t: "<<t<<endl;
}