#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> ansNum;

  for (int i = 0; i < 1 << N; i++) {
    int sum = 0;
    for (int j = N - 1; j >= 0; j--) {
      if (i & 1 << j) {
        sum--;
      } else {
        sum++;
      }
      if (sum < 0) {
        break;
      }
      if (j == 0 && sum == 0) {
        ansNum.push_back(i);
      }
    }
  }

  for (int i = 0; i < ansNum.size(); i++) {
    for (int j = N - 1; j >= 0; j--) {
      if (ansNum[i] & 1 << j) {
        cout << ")";
      } else {
        cout << "(";
      }
    }
    cout << endl;
  }

  return 0;
}
