#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[100009],b[100009];

  for (int i=1;i<=n;i++){
    cin >> a[i];
  }

  for (int i=1;i<=n;i++){
    cin >> b[i];
  }

  sort(a+1,a+n+1);
  sort(b+1,b+n+1);

  long long sum = 0;

  for (int i=1;i<=n;i++){

    sum += abs(a[i]-b[i]);
  }

  cout << sum << endl;

  return 0;
}
