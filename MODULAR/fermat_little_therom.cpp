// C++ program to find modular inverse of a
// under modulo m using Fermat's little theorem.
// This program works only if m is prime.
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void modulo_inverse(int a, int p){
  if(__gcd(a, p) != 1)
    cout << "Not possible";
  else
    a = pow(a, p-2);
    cout << a%p;
}

int main(int argc, char const *argv[]) {
  int a, p;
  a= 3; p = 11;
  modulo_inverse(a,p);
  return 0;
}

/*
  output
  4
*/
