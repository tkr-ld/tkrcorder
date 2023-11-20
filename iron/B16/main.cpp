#include <bits/stdc++.h>
using namespace std;

vector<int> Answer;

int main() {
  int N;

  cin >> N;

  int h[N + 1];

  for (int i = 1; i <= N; i++) {
    cin >> h[i];
  }

  int dp[N + 1];

  dp[1] = 0;
  dp[2] = abs(h[2] - h[1]);

  for (int i = 3; i <= N; i++) {
    dp[i] =
        min(abs(h[i] - h[i - 1]) + dp[i - 1], abs(h[i] - h[i - 2]) + dp[i - 2]);
  }

  int place = N;
  while (true) {
    Answer.push_back(place);
    if (place = 1) break;
    if (dp[place] == dp[place-1] + abs(h[place] - h[place - 1])) place = N-1;
    else place = N -2;
  };

  reverse(Answer.begin(), Answer.end());

  cout << Answer.size() << endl;
  for (int i = 0; i < Answer.size(); i++) {
    if (i != 0) {
      cout << " ";
      cout << Answer[i];
    }
  }

  return 0;
}
