// cpp program to find x^y in log(n)

#include <bits/stdc++.h>
using namespace std;

int power (int x, int y){
  int res = 1;

  while(y){
    if(y&1){
      res = res * x;
    }

    y = y >> 1;
    x = x*x;
  }

  return res;
}

int main(int argc, char const *argv[]) {
  int x, y;
  x = 2; y = 10;
  cout << power(x, y);
  return 0;
}

/*
  output
  1024
*/
