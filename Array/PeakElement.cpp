#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) 
    {
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;

        while(s<e)
        {
            if(arr[mid] < arr[mid+1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }

int main()
{
    int arr[5] = {7,8,9,1,3};
    int n = 5;
    cout << "Peak index in mounted array is at index: " <<peakIndexInMountainArray(arr,n);
}