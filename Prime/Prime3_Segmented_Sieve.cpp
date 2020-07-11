// C++ program to print all primes smaller than or equal to
// n using Segmented Sieve
#include <bits/stdc++.h>
using namespace std;


void Sieve_E(int n, vector<int> &prime){
  int arr[n+1] = {0};
  int i, j;


  for(i = 2; i*i <= n; i++){
    if(arr[i] == 1){
      continue;
    }
    // cout<<i << " ";
    for (j = i*i; j <= n; j += i) {
      arr[j] = 1;
    }
  }

  for(i = 2; i <= n; i++){
    if(arr[i] == 0){
      prime.push_back(i);
      cout<<i << " ";
    }
  }

}

void Segmented_S(int n){
  vector<int> prime;
  int i;
  int low, high;
  int sqt = floor(sqrt(n)) + 1;
  Sieve_E(sqt, prime);
  // for (i = 0; i < prime.size(); i++) {
  //   cout << prime[i] << " ";
  // }
  low = sqt;
  high = sqt * 2;
  while(low<n){
    if(high >= n){
      high = n;
    }
    bool arr[sqt+1];
    memset(arr, true, sizeof(arr));

    for (i = 0; i < prime.size(); i++) {
      int loLim = (floor(low/prime[i])) * prime[i];
      if (loLim < low)
        loLim += prime[i];

      for (int j = loLim; j < high; j+=prime[i] ){
        arr[j-low] = false;

      }
    }
    // cout << "\n";
    for (i = low; i < high; i++){
     if (arr[i - low] == true)
        cout << i << " ";
    }

    low += sqt;
    high += sqt;
  }

}



int main(int argc, char const *argv[]) {
  int n;
  n = 36;
  Segmented_S(n);
  return 0;
}


/*
  output
  2 3 5 7 11 13 17 19 23 29
*/
