#include<bits/stdc++.h>
using namespace std;

int main() { 
    int N, K;

    cin >> N >> K;

    int A[N+1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int X[16], Y[16];


    X[0] = 0;
    Y[0] = 0;

    int mid = N/2;

    for (int i = 1; i <= mid; i++) {
        X[i] = X[i-1] + A[i];
    }

    for (int i = mid+1; i <= N; i++) {
        Y[i-mid] = Y[i-mid-1] + A[i];
    }

    sort(Y, Y+(N-mid)+1);

    for (int i = 0; i <= mid; i++) {
        int pos = lower_bound(Y,Y+N-mid+1, K - X[i]) - Y;
        if (pos <= mid && Y[pos] == K- X[i]){
            cout << "Yes" << endl;
        }
    }

    cout << "No" << endl;

    return 0;
}
