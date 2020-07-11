// cpp program to find the value of x from
// ax equivalent to 1 (mode m)
// Modular multiplicative inverse

#include <bits/stdc++.h>
using namespace std;

int _gcd(int *x, int *y, int a, int m){
  if(a == 0){
    *y = 1;
    *x = 0;
    return m;
  }
  int x1, y1;
  int gcd = _gcd(&x1, &y1, m%a, a);
  *x = y1 - (m/a) * x1;
  *y = x1;
  return gcd;
}

int Modular_M_inverse (int a, int m){
  int res;
  int x, y;
  int gcd = _gcd(&x, &y, a, m);
  if(gcd != 1){
    cout << "Not possible : ";
    return -1;
  }
  res = (x%m + m)%m;
  return res;
}

int main(int argc, char const *argv[]) {
  int x, m;
  x= 3; m = 11;
  cout << Modular_M_inverse (x, m);
  return 0;
}


/*
  output
  4
*/
