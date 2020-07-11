// cpp program of prefix sum 2-d

#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4

int * prefix_sum2 (int arr[][C]){
  int i = 0;
  int j = 0;
  int a[R][C];
  for (i = 0; i < R; i++){
    for (j = 0; j < C; j++) {
      if (i == 0 && j == 0)
        a[i][j] = arr[i][j];
      else if (i == 0 && j > 0)
        a[i][j] = a[i][j-1] + arr[i][j];
      else if (i > 0 and j == 0)
        a[i][j] = a[i-1][j] + arr[i][j];
      else
        a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + arr[i][j];
    }
  }
  for (j = 0; j < R; j++) {
    for (i = 0; i < C; i++) {
      cout << a [j][i] << " ";
    }
    cout << "\n";
  }
}

int main(int argc, char const *argv[]) {
  int arr[R][C] = { { 1, 1, 1, 1 },
                    { 1, 1, 1, 1 },
                    { 1, 1, 1, 1 },
                    { 1, 1, 1, 1 } };

  int i;
  prefix_sum2(arr);

  return 0;
}


/*
  Output
  1 2 3 4
  2 4 6 8
  3 6 9 12
  4 8 12 16
*/
