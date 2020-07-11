// cpp program to find gcd of two number
// Extended Euclidean Algorithm

#include <bits/stdc++.h>
using namespace std;

int Gcd(int a, int b, int *x, int *y){

  if(a == 0){
    *x = 0;
    *y = 1;
    return b;
  }
  int x1, y1;
  int gcd = Gcd(b%a, a, &x1, &y1);
  *x = y1 - (b/a) * x1;
  *y = x1;
  return gcd;
}

int main(int argc, char const *argv[]) {
  int a, b, x, y;
  a= 45;
  b= 9;
  cout << "Gcd of two no. is : " << Gcd(a, b, &x, &y) <<" "<< x<< " "<< y;
  return 0;
}


/*
  output
  Gcd of two no. is : 9
*/
