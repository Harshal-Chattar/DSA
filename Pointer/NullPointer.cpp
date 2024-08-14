#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    int *q = &i;

    cout<<"Address is: "<<q<<endl;
    cout<<"Value is: "<<*q<<endl;

    //Null Pointer

    int *p = 0;
    p = &i;

    cout<<"Address is: "<<p<<endl;
    cout<<"Value is: "<<*p<<endl;

    int num = 5;
    int a = num;
    cout<<"Before: "<<num<<endl;
    a++;
    cout<<"After: "<<num<<endl;


    int *ptr = &num;
    cout<<"Before: "<<num<<endl;
    (*ptr)++;
    cout<<"After: "<<num<<endl;

    //copying pointer

    int *ptr2 = ptr;
    cout<<ptr<<" - "<<ptr2 << endl;
    cout<<*ptr<<" - "<<*ptr2 << endl;

}