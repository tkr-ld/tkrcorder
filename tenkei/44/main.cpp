#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,q;
  cin >> n >> q;

  long long a[n];
  int t[q],x[q],y[q];
  for (int i=0;i<n;i++) {
    cin >> a[i];
  }

  for (int i=0;i<q;i++) {
    cin >> t[i] >> x[i] >> y[i];
  }

  int start = 0;

  
  for (int i=0;i<q;i++) {
    if (t[i] == 1) {
      swap(a[(start+x[i]-1) % n],a[(start+y[i]-1) % n]);
    } else if (t[i] == 2) {
      start = (start+n-1) % n;
    } else if (t[i] == 3) {
      cout << a[(start+x[i]-1) % n] << endl;
    }    
  }

  return 0;
}
