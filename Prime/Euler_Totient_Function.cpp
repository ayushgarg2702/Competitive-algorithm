// C program to calculate Euler's Totient Function
// (prime no. related to n)
#include <bits/stdc++.h>
using namespace std;

void Euler_Totient_F(int n){
  int i;
  int result = n;
  for(i = 2; i*i <= n; i++){
    if(n % i == 0){
      while(n % i == 0)
        n /= i;
      result -= result / i;
    }
  }
  if(n > 1)
    result -= result/n;
  cout << result;
}


int main(int argc, char const *argv[]) {
  int n = 5;
  Euler_Totient_F(n);
  return 0;
}

/*
  output
  4
*/
