#include<bits/stdc++.h>
using namespace std;

int a[300009],b[300009];

int main() { 

    int n,q;

    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }

    cin >> q;
    for(int i=1;i<=q;i++) {
        cin >> b[i];
    }

    // ↓TLE
    // for(int i=1;i<=q;i++) {
    //     int min = 1e10;
    //     for(int j=1;j<=n;j++) {
    //         int target = abs(a[j]-b[i]);
    //         if (min > target) {
    //             min = target;
    //         }
    //     }
    //     cout << min << endl;
    // }

    sort(a+1,a+n+1);

    for(int i=1;i<=n;i++) {
        cout << a[i] << endl;
    }


    for(int i=1;i<=q;i++) {
        int j = lower_bound(a+1,a+n+1,b[i])-a;

        if (j == 1) {
           cout << abs(a[j]-b[i]) << endl;
        } else {
           cout << min(abs(a[j-1]-b[i]),abs(a[j]-b[i])) << endl;
        }
    }

    return 0;
}
