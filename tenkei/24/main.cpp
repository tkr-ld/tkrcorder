#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k,a[1009],b[1009];
  cin >> n >> k;
  for (int i=1;i<=n;i++) {
    cin >> a[i];
  }
  for (int i=1;i<=n;i++) {
    cin >> b[i];
  }

  int sum = 0;
  for (int i=1;i<=n;i++) {
    sum += abs(a[i]-b[i]);
  }

  if (sum <= k && (k-sum) % 2 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
