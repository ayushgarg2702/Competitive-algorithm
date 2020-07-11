// cpp program to check the highest occuring
// number in an array (Frequency check)

#include <bits/stdc++.h>
using namespace std;


vector<int> Higest_f(int arr[],int n){
  int i;
  int max = INT_MIN;
  sort(arr, arr + n);
  int element = arr[0], f = 0;
  vector<int> ar;

  for ( i = 0; i < n; i++) {
    if (element == arr[i]){
      f++;
    }
    else{
      element = arr[i];
      if (f > max){
        max = f;
      }
      f = 1;
    }
  }

  element = arr[0]; f = 0;
  for ( i = 0; i < n; i++) {
    if (element == arr[i]){
      f++;
    }
    else{

      if (f == max){
        ar.push_back(element);
      }
      element = arr[i];
      f = 1;
    }
  }

  return ar;
}


int main(int argc, char const *argv[]) {
  int arr[] = { 2, 4, 5, 5, 9, 7, 8, 3, 2, 1, 5, 2, 2, 2, 1, 5, 3, 7, 2, 2 };
  int n = sizeof (arr) / sizeof (arr[0]);
  vector<int> ar = Higest_f(arr,n);
  cout << "Highest occuring no. is : "  ;
  for(vector<int>::iterator itr = ar.begin(); itr != ar.end(); itr++){
    cout << *itr <<" ";
  }
  return 0;
}



/*
  Output:
  2
*/
