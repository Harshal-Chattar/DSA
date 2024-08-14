#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int key)
{   
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] < key)
        {
            start = mid+1;
        }
        else if(arr[mid] > key)
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int key)
{   
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < key)
        {
            start = mid+1;
        }
        else if(arr[mid] > key)
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}



int main()
{
    int arr[8] = {1,2,3,3,3,3,5,6};
    int n = 8;
    int key = 3;
    // FirstOccurence(arr,n,key);
    // LastOccurence(arr,n,key);
    cout << "First Occurence of " << key << " is at index " << FirstOccurence(arr,n,key) << endl;
    cout << "Last Occurence of " << key << " is at index " << LastOccurence(arr,n,key);
    int TotalOccurence = (LastOccurence(arr,n,key) - FirstOccurence(arr,n,key)) + 1;
    cout<<"\n Total Occurance is "<<TotalOccurence;
}