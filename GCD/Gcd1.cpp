// cpp program to find gcd of two number
// Euclidean algorithm

#include <bits/stdc++.h>
using namespace std;

int Gcd(int a, int b){

  if(a == 0)
    return b;
  return Gcd(b%a, a);
}

int main(int argc, char const *argv[]) {
  int a, b;
  a= 45;
  b= 9;
  cout << "Gcd of two no. is : " << Gcd(a, b);
  return 0;
}


/*
  output
  Gcd of two no. is : 9
*/
