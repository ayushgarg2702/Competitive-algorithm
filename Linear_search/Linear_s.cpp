// C++ code to search a 'x' element is preaent in
// an array 'arr' then return true of false.
// Time complacity is O(n)
// n is the size of array

#include <bits/stdc++.h>
using namespace std;

// Function to search element is present or not
// return true or false base on contition
bool Linear_search(int arr[], int n, int x){
  int i;
  for(i = 0; i <= n; i++){
    if(arr[i] == x){
      return true;
    }
  }
  return false;
}


int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x;
  int n = sizeof(arr) / sizeof(arr[0]);
  //Element that we want to search
  cin >> x;
  bool ans = Linear_search(arr, n, x);

  if (ans)
    cout << x << " is present.";
  else
    cout << x << " is not present.";

  return 0;
}


/*
    output:
    4
    4 is present.

    44
    44 is not present.
*/
