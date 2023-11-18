#include <iostream>
using namespace std;

int main() { 
    int N;
    int P[1509][1509];
    int A, B, C, D;
    cin >> N;
    int SUM[1509][1509];

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            P[i][j] = 0;
            SUM[i][j] = 0;
        }
    }
    for (int i = 1; i <= N; i++) {
        cin >> A >> B >> C >> D;
        P[A+1][B+1]++;
        P[C+1][D+1]++;
        P[A+1][D+1]--;
        P[C+1][B+1]--;
    }

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) SUM[j][i] = SUM[j-1][i] + P[i][j];
    }

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            SUM[i][j] = SUM[i][j-1] + SUM[i][j];
        }
    }
    int F = 0;

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            if (SUM[i][j] != 0) {
                F++;
            }   
        }
    }

    cout << F << endl;

    return 0;
}