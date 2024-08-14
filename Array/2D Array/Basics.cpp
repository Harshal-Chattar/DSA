#include<iostream>
using namespace std;

bool isPresent(int arr[3][4], int target, int row, int col)
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    //Taking input row wise

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }


    //Taking input column wise

    // for(int i=0; i<4; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    //print
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element to search: "<<endl;

    int target;

    cin>>target;

    if(isPresent(arr,target,3,4))
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }

    return 0;

}