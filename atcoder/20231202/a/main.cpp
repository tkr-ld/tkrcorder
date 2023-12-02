#include <bits/stdc++.h>
using namespace std;

int main() {
    int M,D,y,m,d;
    cin >> M >> D;
    cin >> y >> m >> d;

    int ansy= y, ansm=m, ansd=d;

    if (++d > D) {
        d = 1;
        if (++m > M) {
            m = 1;
            y++;
        }       
    }

    cout << y << " " << m << " " << d << endl;

    return 0;
}
