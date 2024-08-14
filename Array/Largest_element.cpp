#include<iostream>
using namespace std;

int main() {
  int arr[] = {2,5,1,3,0};
  int n = 5;
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  cout << "The largest element in the array is: " << max << endl;
}




