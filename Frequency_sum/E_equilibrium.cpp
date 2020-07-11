// C++ program to find equilibrium
// index of an array

#include <bits/stdc++.h>
using namespace std;

int equilibrium (int arr[], int n){
  int sum = 0;
  int i;
  int lsum = 0;
  for (i = 0; i < n; i++) {
    sum += arr[i];
  }
  for (i = 0; i < n; i++) {
    sum -= arr[i];

    if (sum == lsum) {
      return i;
    }
    lsum += arr[i];
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  int arr[] = { 1, 2, 3, 4, 6};
  int n = sizeof (arr) / sizeof(arr[0]);
  cout << "Equilibrium index is : " << equilibrium(arr, n);
  return 0;
}



/*
  Output
  Equilibrium index is : 3
*/
