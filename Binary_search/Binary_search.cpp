// cpp program for binary search

#include <bits/stdc++.h>
using namespace std;

int Binary_s(int arr[], int s, int n, int search){
  if(n >= s){
    int mid = s + ((n-s)/2);
    if(arr[mid] == search)
      return 1;
    if(arr[mid] > search)
      return Binary_s(arr, s, mid-1, search);

      return Binary_s(arr, mid + 1, n, search);
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int arr[] = {5, 8, 9, 7, 4, 2, 3, 1, 6};
  int n = sizeof(arr) / sizeof (arr[0]);
  sort(arr, arr+n);
  int search = 4;

( Binary_s(arr, 0, n - 1,search) != 0)? cout << "Value found" :
                                        cout << "Value not found";

  return 0;
}


/*
  output
  Value found
*/
