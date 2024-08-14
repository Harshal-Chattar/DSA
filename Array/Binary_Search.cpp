#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int low = 0;
    int high = n-1;
    //int mid = (low+high)/2;

    //For optimization
    int mid = low + (high - low/2);

    while(low<=high)
    {
        if(arr[mid]==key)
        {
            cout<<"Element found!!"<<endl;
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

int main()
{
    int arr[5] = {3,5,9,13,27};
    int n = 5;
    int key;
    cout<<"Enter key u want to search: ";
    cin>>key;
    int index = BinarySearch(arr,n,key);
    cout<<"Index of "<<key<<" is: "<<index;

}