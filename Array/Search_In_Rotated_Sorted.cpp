#include<iostream>
using namespace std;  

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; //return e
}

int BinarySearch(int arr[],int s, int e, int key)
{
    int low = s;
    int high = e;
    //int mid = (low+high)/2;

    //For optimization
    int mid = low + (high - low/2);

    while(low<=high)
    {
        if(arr[mid]==key)
        {
            cout<<"Element found at index: ";
            return mid;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }

        mid = low + (high - low/2);

    }
    return -1;
}

int search(int arr[], int n, int k)
{   
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k<= arr[n-1])
    {
        return BinarySearch(arr,pivot,n-1,k);
    }
    else
    {
        return BinarySearch(arr,0,pivot-1,k);
    }
}

int main()
{
    int arr[9] = {5,6,7,8,9,10,1,2,3};
    int n = 9;
    int k = 10;
    cout<<search(arr,n,k)<<endl;
    return 0;
}