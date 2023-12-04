#include <bits/stdc++.h>
using namespace std;

long long opow(long long x, long long y) {
  int sum = 1;
  for(int i=1;i<=y;i++) {
    sum *= x;
  }
  return sum;
}

int main() {
  long long a, b, c;
  cin >> a >> b >> c;


  if (a < opow(c, b)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
