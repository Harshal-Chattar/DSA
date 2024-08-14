#include<iostream> 
using namespace std;

int main()
{
    //int arr[10] = {23,122,41,67};

    // cout<<"Address of first block: "<<arr<<endl;
    // cout<<"Arr[0]: "<<arr[0]<<endl;
    // cout<<"Address of first block: "<<&arr<<endl;

    // cout<<"value on 1st: "<<*arr<<endl;
    // cout<<"value is: "<<*arr+1<<endl;
    // cout<<"value is: "<<*(arr+1)<<endl;
    // cout<<"value is: "<<(*arr)+1<<endl;
    // cout<<"value is: "<<arr[2]<<endl;
    // cout<<"value is: "<<*(arr+2)<<endl;

    // int i = 3;

    // //i[arr] = *(i+arr);
    // cout<< i[arr]<<endl;

    // int temp[10] = {1,2};
    // int *ptr = &temp[0];
    // cout<<sizeof(temp)<<endl;
    // cout<<"1st: "<<sizeof(*temp)<<endl;
    // cout<<"2nd: "<<sizeof(&temp)<<endl;     

    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20] = {1,2,3,5};
    // cout<<"->" <<&a[0] <<endl;

    // int *p = &a[0];
    // cout<<"->" << &p<<endl;

    int arr[10];
    //ERROR
    //arr = arr+1;

    int *ptr = &arr[0];
    cout<< ptr <<endl;
    ptr = ptr + 1;
    cout<< ptr<<endl;


}