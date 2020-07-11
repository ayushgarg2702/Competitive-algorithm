// cpp program of prefix sum 1-d

#include <bits/stdc++.h>
using namespace std;

int * prefix_sum1(int arr[], int n){
  int i = 0;
  for (i = 1; i < n; i++) {
    arr[i] = arr[i] + arr[i - 1];
  }
  return arr;
}

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 4, 5, 9, 7, 8, 6, 3, 1, 2, -5, -9, 0, -6, 5};
  int n = sizeof (arr) / sizeof (arr[0]);
  int i;
  int *ar = prefix_sum1(arr,n);
  for (i = 0; i < n; i++) {
    cout << arr [i] << " ";
  }
  return 0;
}


/*
  Output
  1 3 7 12 21 28 36 42 45 46 48 43 34 34 28 33
*/
