#include<iostream>
using namespace std;    

void Reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

void PrintArray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    Reverse(arr,n);
    PrintArray(arr,n);
}