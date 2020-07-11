// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;


void Sieve_E(int n){
  int arr[n+1] = {0};
  int i, j;


  for(i = 2; i*i <= n; i++){
    if(arr[i] == 1){
      continue;
    }
    cout<<i << " ";
    for (j = i*i; j <= n; j += i) {
      arr[j] = 1;
    }
  }

  for(i; i <= n; i++){
    if(arr[i] == 0){
      cout<<i << " ";
    }
  }

}

int main(int argc, char const *argv[]) {
  int n;
  n = 30;
  Sieve_E(n);
  return 0;
}


/*
  output
  2 3 5 7 11 13 17 19 23 29
*/
