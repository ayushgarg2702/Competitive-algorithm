// cpp proram to find x^y in log(n)
// where y is negative and x is float
// recursive solution (Divide and conqure)

#include <bits/stdc++.h>
using namespace std;

float power(float x, int y){
  float temp;
  if (y == 0)
    return 1;

  temp = power(x, y / 2);
  if(!(y&1))
    return temp * temp;
  else{
    if(y > 0)
      return temp * temp * x;
    else
      return (temp * temp) / x;
  }
}

int main(int argc, char const *argv[]) {
  int y;
  float x;
  x = 2; y = -3;
  cout << power (x, y);
  return 0;
}

/*
  output
  0.125
*/
