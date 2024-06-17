#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  string s[n];
  int c[n];

  for (int i = 0; i < n; i++) {
    cin >> s[i] >> c[i];
  }

  sort(s, s+n);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += c[i];
  }

  cout << s[sum % n] << endl;
}
