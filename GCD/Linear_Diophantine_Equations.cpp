// cpp program the solution of x and y is in intiger form
// from ax + by = c where (a, b, c) is given
// Linear Diophantine Equations

#include <bits/stdc++.h>
using namespace std;

int ispossible(int a, int b, int c){
  if(a == 0){
    if(c % b == 0){
      return 1;
    }
    else{
      return 0;
    }
  }
  ispossible(b%a,a,c);
}

int main(int argc, char const *argv[]) {
  int a, b, c;
  a = 3; b = 6; c = 9;
  ispossible(a,b,c)? cout << "Possible":
                     cout << "Not Possible";
  return 0;
}

/*
  output
  Possible
*/
