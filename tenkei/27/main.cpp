#include <bits/stdc++.h>
using namespace std;

int main() {
  set<string> names;
  int n;
  cin >> n;
  string name[int(1e5+9)];
  for(int i=1;i<=n;i++) {
    cin >> name[i];
  }

  for(int i=1;i<=n;i++) {
    if (names.find(name[i]) == names.end()){
      cout << i << endl;
      names.insert(name[i]);
    }
  }

  return 0;
}
