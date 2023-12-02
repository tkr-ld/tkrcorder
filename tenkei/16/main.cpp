#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a,b,c;
  cin >> n >> a >> b >> c;
  int min = 1000000;
  for (int i=1;i<=9999;i++) {
    for(int j=1;j<=9999;j++) {
      if(a * i + b * j < n && (n -a * i - b * j) % c == 0 && (n -a * i - b * j) / c <= 9997) {
       min = (min, i + j +(n -a * i - b * j) / c);
      }
    }
  }

  cout << min << endl;

  return 0;
}
