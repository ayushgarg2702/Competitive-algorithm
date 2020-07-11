// CPP program to show the use of circular array
// without using Extra space.

#include <bits/stdc++.h>
using namespace std;

void Circular_array(int arr[], int n, int x){
  int i;
  for( i = x; i < x + n; i++){
    cout << arr[ i % n] << " ";
  }
  cout << "\n";
}


int main(int argc, char const *argv[]) {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  int itr;
  cin >> itr;
  Circular_array(arr, n, itr);
  return 0;
}


/*
    output:
    5
    5 6 7 8 9 0 1 2 3 4
    2
    2 3 4 5 6 7 8 9 0 1
*/
