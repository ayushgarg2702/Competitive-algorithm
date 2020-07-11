// cpp program to find (x!)%n

#include <bits/stdc++.h>
using namespace std;

int highest_power(int x, int p){
  int res = 0;
  while(x){
    x /= p;
    res += x;
  }
  return res;
}


int power(int x, int n, int p){
  int res = 1;
  x = x %p;
  while (n){
    if(n&1)
      res = (res * x)%p;

    n = n >> 1;
    x = (x * x) % p;
  }
  return res;
}

int factmod (int x, int n){
  if(n <= x){
    return 0;
  }
  int res = 1;
  int sieve[x+1];
  int i, j;
  memset(sieve, 1, sizeof(sieve));
  for(i = 2; i <= x; i++){
    if(sieve[i]){
      for(j = i*i; j <= x; j += i){
        sieve[j] = 0;
      }
    }
  }
  for (i = 2; i <= x; i++){
    if(sieve[i]){
      int k = highest_power(x, i);

      res= (res*(power(i, k, n)))%n;
    }
  }
  return res;
}

int main(int argc, char const *argv[]) {
  int x, n;
  x = 25; n = 29;
  cout << factmod(x, n);
  return 0;
}

/*
  output
  5
*/
