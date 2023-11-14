#include <iostream>
using namespace std;

int main() { 
    int N;
    int P[10009][10009];
    int Q;
    int a, b, c, d;
    int SUM[1009][1009];
    cout <<  "点の個数Nを入力してください。" << endl;
    cin >> N;

    cout <<  "質問数Qを入力してください。" << endl;
    cin >> Q;

    for (int i = 1; i <= N; i++) {
        cout <<  "X座標とY座標を入力してください。"<< endl;
        int X, Y;
        cin >> X >> Y;
        P[X][Y]++;
    }

    for  (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
         SUM[j][i] = P[j][i]+ SUM[j-1][i];
        }
    }

    for  (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
         SUM[j][i] = SUM[j][i-1] + SUM[j][i];
        }
    }

    for (int i = 1; i <= Q; i++) {
        cin >> a >> b >> c >> d;
        cout << SUM[c][d] + SUM[a-1][b-1] - SUM[a-1][d] - SUM[c][b-1] << endl;
    }

     return 0;
}