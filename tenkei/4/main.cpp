#include<bits/stdc++.h>
using namespace std;

int main() { 
    int h,w;
    cin >> h >> w;
    int A[2009][2009];

    for (int i=1; i<=h ; i++) {
        for (int j=1; j<=w ; j++) {
            cin >> A[i][j];
        }
    }

    int H[2009];
    int W[2009];


    for (int i=1; i<=h ; i++) {
        H[i] = 0;
        for (int j=1; j<=w ; j++) {
            H[i] += A[i][j];
        }
    }

    for (int i=1; i<=w ; i++) {
        W[i] = 0;
        for (int j=1; j<=h ; j++) {
            W[i] += A[j][i];
        }
    }

    int B[2009][2009];

    for (int i=1; i<=h ; i++) {
        for (int j=1; j<=w ; j++) {
            B[i][j] = H[i] + W[j] - A[i][j];
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
