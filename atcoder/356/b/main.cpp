#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int a[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  int x[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> x[i][j];
    }
  }

  int sum[m];
  for (int i = 0; i < m; i++) {
    sum[i] = 0;
  }

  bool flg = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum[j] += x[i][j];
      if (i == n-1 && sum[j] < a[j]) {
        flg = false;
        break;
      }
    }
  }

  if(flg) {
    cout << "Yes" << endl;
  }else {
    cout  << "No" << endl;
  }
}
