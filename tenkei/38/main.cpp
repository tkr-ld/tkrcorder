#include <bits/stdc++.h>
using namespace std;


//最小公約数の場合（ユーグリッドの互除法）
long long ogcd(long x, long y){
  if(x == 0) {
    return y;
  }
  // y < xの場合はogcd(y,x)となり,xとyが逆転する
  return ogcd(y%x,x);
}

long long koubai(long long a,long long b) {
  while (true) {
    if (a == b) {
      return a;
    } else if (a > b)  {
      a *= a;
    } else {
      b *= b;
    }
  }
  return a;
}

int main() {
  long long a,b;
  cin >> a >> b;

  // ↓時間間に合わない
  // long long a2 = a;
  // long long b2 = b;
  // while (true) {
  //   if (a2 > 1e18 || b2 > 1e18) {
  //     cout << "Large" << endl;
  //   } else if (a2 == b2) {
  //     cout << a2 << endl;
  //     break;
  //   } else if (a2 < b2)  {
  //     a2 += a;
  //   } else {
  //     b2 += b;
  //   }
  // }

  long long r = b / gcd(a,b);
  if (r > 1e18/a) cout << "Large" << endl;
  else cout << a * r << endl;
  return 0;
}
