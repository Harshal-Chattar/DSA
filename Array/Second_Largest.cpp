#include<iostream>
using namespace std;


int SecondLargest(int arr[],int n)
{
    int large = INT_MIN, secondlarge = INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(large<arr[i])
        {
            secondlarge = large;
            large = arr[i];
        }

        else if(secondlarge < arr[i] && arr[i] != large)
        {
            secondlarge = arr[i];
        }
    }
    return secondlarge;
}


int main() {
  int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        // int sS=secondSmallest(arr,n);
        int sL=SecondLargest(arr,n);
    // cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}




