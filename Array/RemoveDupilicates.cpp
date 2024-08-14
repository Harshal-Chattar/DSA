#include<iostream>
using namespace std;

int RemoveDuplicates(int arr[],int n)
{
    int i = 0,j;
    for(j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main()
{
    int arr[]={1,2,3,3,4,5};
    int n = 6;
    int k = RemoveDuplicates(arr,n);
    cout<<"Unique Elements:"<<k<<endl;
    cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}