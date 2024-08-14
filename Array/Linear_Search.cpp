#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {2,34,12,54,3};
    int n = 5;
    int key;
    cout<<"Enter you want to search:"<<endl;
    cin>>key;

    int found = LinearSearch(arr,n,key);

    if(found)
    {
        cout<<"Element is found";
    }
    else{
        cout<<"Not present!!";
    }
}