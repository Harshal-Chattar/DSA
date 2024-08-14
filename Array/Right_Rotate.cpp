#include<iostream>
using namespace std;

int RightRotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;
    cout<<"Array after Right Rotate: ";
    RightRotate(arr,n);
}