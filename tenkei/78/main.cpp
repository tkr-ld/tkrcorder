#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  int k;
  cin >> n >> k;

  for (int i=1;i<=k;i++) {
    int value;
    for (int j=0;j<n.size(); j++){
      value += (n[j]-'0') * pow(8,n.size()-1-j);
      
    }
    int j = 9;
    n = "";
    while (value > 0) {
      int a = value % 9;
      char c = (a+'0');
      if (a == 8) {
        c = '5';
      }
      n = c + n;
      value = value / 9;
    }
  }

  cout << n << endl;

  return 0;
}
