#include <bits/stdc++.h>
using namespace std;

int main() {
  int q,t[100009],x[100009];
  cin >> q;
  for(int i=1;i<=q;i++){
    cin >> t[i] >> x[i];
  }

  vector<int> y;

  for(int i=1;i<=q;i++){
    if (t[i] == 1) {
      y.push_back(x[i]);
    } else if(t[i] == 2) {
      y.insert(y.begin(),x[i]);
    } else {
      cout << y[y.size()-x[i]] << endl;
    }
  }

  return 0;
}
