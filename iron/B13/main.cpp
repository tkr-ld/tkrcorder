#include<bits/stdc++.h>
using namespace std;

int main() { 
    int N, K;

    cin >> N >> K;

    int A[100009];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int SUM[100009];
    for (int i = 1; i <= N; i++) {
        SUM[i] = A[i] + SUM[i-1];
    }

    int count = 0;
    for  (int i = 0; i <= N; i++) {
        int j = i + 1;
        while (j <= N && SUM[j] - SUM[i] <= K) {
            count++;
            j++;
        }
    }

    cout << count << endl;

    return 0;
}
