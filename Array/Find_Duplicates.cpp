#include<iostream>
using namespace std;

void FindDuplicates(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<endl;
            }
        }
    }
}

int main()
{
    int arr[] = {4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    FindDuplicates(arr,n);
}