// cpp program to find (x ^ y) % n in log(n)
// modular exponentiation
#include <bits/stdc++.h>
using namespace std;

int power (int x, int y, int n){
  int res = 1;
  x %= n;

  if(x == 0){
    return 0;
  }

  while(y){
    if(y&1){
      res = (res * x) % n;
    }

    y = y >> 1;
    x = (x * x) % n;
  }
  return res;
}


int main(int argc, char const *argv[]) {
  int x, y, n;
  x = 2; y = 10; n = 3;
  cout << power (x, y, n);
  return 0;
}

/*
  output
  1
*/
