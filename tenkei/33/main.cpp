#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  //bool led[109][109];
  cin >> h >> w;

  // int sum = 0;
  // for (int i = 1; i <= h; i++) {
  //   for (int j = 1; j <= w; j--) {
  //     if (!led[i - 1][j] && !led[i + 1][j] && !led[i][j - 1] && !led[i][j + 1] && !led[i-1][j-1] && !led[i+1][j-1] && !led[i-1][j+1] && !led[i+1][j+1]) {
  //       led[i][j] = true;
  //       sum++;
  //     }
  //   }
  // }

  // cout << sum << endl;

  if (h == 1) cout << w << endl;
  else if (w == 1) cout << h << endl;
  else {
    // 偶数の時は切り捨てられる、奇数の時は偶数にして答えを合わせる。
    cout << ((h+1)/2)*((w+1)/2) << endl;
  }

  return 0;
}
