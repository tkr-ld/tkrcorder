#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int c[n + m];

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    c[i] = a[i];
  }

  int b[m];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    c[n + i] = b[i];
  }

  sort(c, c + n + m);

  for (int i = 1; i < n + m; i++) {
    bool exists = std::find(a, a + n, c[i]) != a + n;
    bool previosExists = std::find(a, a + n, c[i - 1]) != a + n;
    if (exists && previosExists) {
      cout << "Yes" << endl;
      break;
    }
    if (i == n + m - 1) {
      cout << "No" << endl;
    }
  }
}
