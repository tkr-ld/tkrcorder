#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  vector<int> a(n);

  for (auto& number : a) {
    cin >> number;
  }

  int start = 0;
  while (a.size() > 0) {
    int targetK = k;
    while (true) {
      if (a.size() == 0) {
        start++;
        break;
      } else if (targetK > a[0]) {
        targetK -= a[0];
        a.erase(a.begin());
      } else if (targetK == a[0]) {
        a.erase(a.begin());
        start++;
        break;
      } else {
        start++;
        break;
      }
    }
  }

  cout << start << endl;
}
