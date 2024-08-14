#include<iostream>
using namespace std;

int main()
{
    int num = 5;

    cout<<"printing num: "<<num<<endl;

    //address of num

    cout<<"Address of num is: "<<&num<<endl;

    int *ptr = &num;

    cout<<"Address is: "<< ptr << endl;
    cout<<"Value is: "<< *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout<<"Address is: "<< p2 <<endl;
    cout<<"Value is: "<< *p2 <<endl;

    cout<<"Size of integer is: "<<sizeof(num) << endl;
    cout<<"Size of double is: "<<sizeof(d) << endl;
    cout<<"Size of pointer is: "<<sizeof(ptr) << endl;
    cout<<"Size of pointer to double is: "<<sizeof(p2) << endl;

    return 0;
}