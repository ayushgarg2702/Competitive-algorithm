// CPP program to check given number is Palindromic
// number or not.

#include <bits/stdc++.h>
using namespace std;

bool Palindromic(int n){
  //To store the digits of n
  int arr[18];
  int count, n1;
  int single_d;
  int i = 0;
  count = 0;
  n1 = n;

  // Count the no. of digits in n
  // and store digits in array
  while(n1){
    single_d = n1 % 10;
    arr[count++] = single_d;
    n1 = n1 / 10 ;
  }

  // To check the given no. Palindromic
  for(i = 0; i < count; i++, count--){
    if(arr[i] != arr[count - 1]){
      return false;
    }
  }
  return true;
}


int main(int argc, char const *argv[]) {
  int n;
  cin >> n;

  bool result = Palindromic(n);

  if (result)
    cout << "Enter no. is Palindromic.";
  else
    cout << "Enter no. is not Palindromic.";
  return 0;
}


/*
    output:
    123321
    Enter no. is Palindromic.
    123421
    Enter no. is not Palindromic.
*/
