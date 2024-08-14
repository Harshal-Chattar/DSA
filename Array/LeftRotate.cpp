#include<iostream>
using namespace std;

int LeftRotate(int arr[], int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1] = temp;

    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;
    cout<<"Array after Left Rotate: ";
    LeftRotate(arr,n);
}