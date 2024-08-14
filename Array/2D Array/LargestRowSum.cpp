#include<iostream>
using namespace std;

void printSum(int arr[3][3], int row, int col)
{
    cout<<"Printing sum: "<<endl;
    for(int row=0; row<3; row++)
    {
        int sum = 0;

        for(int col=0; col<3; col++)
        {
            sum += arr[row][col];
        }
        cout<< sum<< " ";
    }
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT64_MIN;
    int rowIndex= -1;
    int sum;
    for(int row=0; row<3; row++)
    {
        int sum = 0;
        for(int col=0; col<3; col++)
        {
            sum += arr[row][col];
        }
        if(sum>maxi)
        {
            maxi = sum;
            rowIndex= row;
        }
    }

    cout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];

    //Taking input row wise

    cout<<"Enter the elements: ";

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>>arr[row][col];
        }
    }

    //print
    cout<<"Printing the array: ";
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int ansIndex = largestRowSum(arr,3,3);
    cout<<"Max row is at index: "<<ansIndex;


    return 0;

}