#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,C[100009],P[100009],Q,L[100009],R[100009];
  cin >> N;
  for (int i=1;i <= N; i++) {
    cin >> C[i] >> P[i];
  }

  cin >> Q;
  for(int i=1;i <= Q;i++) {
    cin >> L[i] >> R[i];
  }

  int sum1[100009],sum2[100009];

  for (int i=0;i <= N; i++) {
    sum1[i] = 0;
    sum2[i] = 0;
  }

  for (int i=1;i <= N; i++) {
    if(C[i] == 1) {
      sum1[i] = sum1[i-1] + P[i];
      sum2[i] = sum2[i-1];
    } else {
      sum2[i] = sum2[i-1] + P[i];
      sum1[i] = sum1[i-1];
    }
  }

  for(int i=1;i <= Q;i++) {
    cout << sum1[R[i]] - sum1[L[i]-1] << " " << sum2[R[i]] - sum2[L[i]-1] << endl;
  }

  return 0;
}
