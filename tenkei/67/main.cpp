#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;

  cin >> n >> m;
  map <int, int> henmap;
  
  for (int i=1;i<=m;i++) {
    int a,b;
    cin >> a >> b;
    if (a>b){
      if (henmap.find(a) == henmap.end()) {
        henmap[a] = 1;
      } else {
        henmap[a] = henmap[a]+1;
      }
    } else {
      if (henmap.find(b) == henmap.end()) {
        henmap[b] = 1;
      } else {
        henmap[b] = henmap[b]+1;
      }
    }
  }

  int ans = 0;
  for (const auto& [key, value] : henmap){
    if(value == 1) {
      ans++;
    }
  }

  cout << ans << endl;
  
  return 0;
}
