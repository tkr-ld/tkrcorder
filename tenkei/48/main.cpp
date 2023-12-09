#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;

  vector<long long> c;


  for (int i=0;i<n;i++) {
    long long a,b;
    cin >> a >> b;
    c.push_back(b);
    c.push_back(a-b);
  }

  sort(c.rbegin(),c.rend());

  long long ans = 0;
  for (int i=0;i<k;i++) {
    ans += c[i];
  }

  cout << ans << endl;

  return 0;
}
