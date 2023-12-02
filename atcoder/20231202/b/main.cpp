#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,m,l;
    cin >> n >> s >> m >> l;

    long long ans=10e10;
    for(int i=0;i<=100;i++) {
        for(int j=0;j<=100;j++) {
            for(int k=0;k<=100;k++) {  
                int num = 6 * i + 8 * j + 12 * k; 
                if (num >= n) {
                    long long  sum = s * i + m * j + l * k;
                    ans = min(ans, sum);
                }       
            }
        }
    }

    cout << ans << endl;
}
