// cpp program to find x!

#include <bits/stdc++.h>
using namespace std;

int max_power(int n, int i){
  int res = 0;
  while(n){
    n /= i;
    res += n;
  }
  return res;
}

long long power(int n, int k){
  long long res = 1;
  while(k){
    if(k&1)
      res = res * n;

    k = k >> 1;
    n = n * n;
  }
  return res;
}

long long fact (int n){
  long long res = 1;
  if( n <= 1 )
    return 1;
  int sieve[n+1];
  int i, j;
  memset(sieve,1,sizeof(sieve));
  for (i = 2; i <= n; i++){
    if(sieve[i]){
      for(j = i*i; j<=n; j+=i){
        sieve[j] = 0;
      }
    }
  }

  for(i = 2; i <= n; i++){
    if(sieve[i]){
      int k = max_power(n, i);

      res= res * power(i, k);

    }
  }


   return res;
}

int main(int argc, char const *argv[]) {
  int n;
  n = 5;
  cout << fact(n);
  return 0;
}

/*
  output
  120
*/
