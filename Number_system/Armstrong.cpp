// CPP program to check given number is Armstrong
// number or not.

#include <bits/stdc++.h>
using namespace std;

bool Armstrong(int n){
  int power = 3;
  int temp = n, sum = 0;
  while(temp){
    sum = sum + pow( (temp % 10) , power) ;
    temp = temp / 10;
  }

  return (sum == n) ;
}


int main(int argc, char const *argv[]) {
  int n;
  cin >> n;

  bool result = Armstrong(n);

  if (result)
    cout << "Enter no. is Armstrong.";
  else
    cout << "Enter no. is not Armstrong.";
  return 0;
}


/*
    output:
    153
    Enter no. is Armstrong.
    124
    Enter no. is not Armstrong.
*/
