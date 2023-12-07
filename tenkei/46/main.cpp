#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n],b[n],c[n];
  for (int i=0;i<n;i++) cin >> a[i];
  for (int i=0;i<n;i++) cin >> b[i];
  for (int i=0;i<n;i++) cin >> c[i];

  int ag[46],bg[46],cg[46];

  for (int i=0;i<46;i++) {
    ag[i] = 0;
  }
  for (int i=0;i<46;i++) {
    bg[i] = 0;
  }
  for (int i=0;i<46;i++) {
    cg[i] = 0;
  }

  for (int i=0;i<n;i++) {
    ag[a[i]%46]++;
  }
  for (int i=0;i<n;i++) {
    bg[b[i]%46]++;
  }
  for (int i=0;i<n;i++) {
    cg[c[i]%46]++;
  }


  int count = 0;
  for (int i=0;i<46;i++) {
    for (int j=0;j<46;j++) {
      for (int k=0;k<46;k++) {
        if ((i+j+k)%46 == 0) {
          int combi = ag[i] * bg[j] * cg[k];
          count += combi;
        }
      }
    }
  }

  cout << count << endl; 

  return 0;
}
