#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m,a[19][19];
  cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cin >> a[i][j];
    }
  }
  cin >> m;
  
  bool ken[19][19];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++) ken[i][j] = false;
  }
  for(int i=1;i<=m;i++){
    int k,v;
    cin >> k;
    cin >> v;
    ken[k][v] = true;
  }

  int p[11];


  for(int i=0;i<=n;i++){
    p[i] = i;
  }

  int ans = 1000000;

  do {
    int sum = 0;
    for(int i=1;i<=n;i++) {
      if(ken[p[i]][p[i-1]] || ken[p[i-1]][p[i]]) {
        break;
      } else {
        int target = a[i][p[i]];
        sum += target;
        if (i == n) {
          ans = min(ans, sum);
        }
      }
    }
  } while(next_permutation(p+1, p+n+1));

  if (ans == 1000000) {
    cout << "-1" << endl;
  } else  {
    cout << ans << endl;
  }

  return 0;
}
