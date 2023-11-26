#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,p,q;
  cin >> n >> p >> q;
  long long a[n+1];

  for(int i=1;i<=n;i++) cin >> a[i];

  int ans = 0;

  for(int i=1;i<=n;i++) {
    for(int j=1+i;j<=n;j++) {
      for(int k=1+j;k<=n;k++) {
        for(int l=1+k;l<=n;l++) {
          for(int m=1+l;m<=n;m++) {
            long long  sum = a[i]%p*a[j]%p*a[k]%p*a[l]%p*a[m]%p;
            if (sum == q){
              ans++;
            }
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
