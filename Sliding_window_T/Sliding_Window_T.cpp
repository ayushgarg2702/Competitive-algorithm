// O(n) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
using namespace std;

int Window_s(int arr[], int n, int k){
  int sum;
  int window = 0;
  int i, j = 0;
  for(i = 0; i < k; i++){
    window += arr[i];
  }
  sum = window;

  for(i; i < n; i++, j++){
    window = window + arr[i] - arr[j];
    if(window > sum)
      sum = window;
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  int arr[] = {1, 5, 2, -3, 4, 9, 7, 4, -1, -9, 4};
  // Window size
  int k = 4;
  int n = sizeof (arr) / sizeof (arr[0]) ;
  cout << "Maximum sum is : " << Window_s(arr, n, k);
  return 0;
}


/*
  output
  Maximum sum is : 24
*/
