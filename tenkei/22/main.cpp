#include <bits/stdc++.h>
using namespace std;

int ogcd(int x,int y) {
  int a,b;
  // a > bのとき、a % b == aでgcd(b,a)になるため必要ない？
  if (x >= y) {
    a = x;
    b = y;
  } else {
    a = y;
    b = x;
  }
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}  

int main() {
  int a,b,c;
  cin >> a >> b >> c;

  int d = ogcd(a, ogcd(b,c));

  cout << (a/d + b/d + c/d -3) << endl;
  
  return 0;
}
