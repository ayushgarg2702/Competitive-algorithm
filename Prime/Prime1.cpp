//cpp program to check prime in sqrt(n)

#include <bits/stdc++.h>
using namespace std;

int prime(int n){
  int i = 0;
  if(n <= 1)
    return 0;
  if(n <= 3)
    return 1;
  if (n%2 == 0 || n%3 == 0)
    return 0;
  for(i = 5; i*i <= n; i += 6){
    if( (n%i==0) || (n%(i+2)==0) ){
      return 0;
    }
  }

  return 1;
}

int main(int argc, char const *argv[]) {
  int n = 25;
  prime(n)? cout << "Prime" : cout << "Not Prime";
  return 0;
}


/*
  output
  Prime
*/
