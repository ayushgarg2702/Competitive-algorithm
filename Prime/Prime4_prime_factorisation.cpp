// finding the prime factorisation of a no. in log n per query

#include <bits/stdc++.h>
using namespace std;
#define INT_MA  100001
int spf[INT_MA];

void sieve(){
  spf[1] = 1;
  int i;
  for(i = 2; i < INT_MA; i ++)
    spf[i] = i;

  for(i = 4; i < INT_MA; i += 2)
    spf[i] = 2;

  for(i = 3; i*i < INT_MA; i++){
    if(spf[i] == i){
      for(int j = i*i; j < INT_MA; j+=i){
        if(spf[j]==j){
          spf[j]=i;
        }
      }
    }
  }

}

vector<int> prime_fact(int x){
  vector<int> a;
  while(x != 1){
    a.push_back(spf[x]);
    x /= spf[x];
  }
  return a;
}

int main(int argc, char const *argv[]) {
  sieve();
  int i;
  int x = 210;
  vector<int> prime_f = prime_fact(x);

  for(i = 0; i < prime_f.size(); i++){
    cout << prime_f[i] << " ";
  }
  return 0;
}


/*
  output
  2 3 5 7
*/
