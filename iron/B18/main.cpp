#include<bits/stdc++.h>
using namespace std;

int main() { 
    int N,S,A[69];
    bool dp[69][100009];

    vector<long long> Answer;

    cin >> N >> S;

    for (int i = 1;i <= N;i++) cin >> A[i];
    

    dp[0][0] = true;
    for (int i = 1;i <= S;i++) dp[0][i] = false;

    for (int i = 1;i <= N;i++) {
        for (int j = 0;j <= S;j++) {
            dp[i][j] = false;

            if (dp[i-1][j] == true) {
                dp[i][j] = true;
            } 

            if (A[i] <= j && dp[i-1][j-A[i]] == true) {
                dp[i][j] = true;
                if (dp[i][j] && j == S) {
                    int x = i;
                    int y = j;
                    while(x >= 0) {
                        if(dp[x-1][y-A[x]]== true) {
                            Answer.push_back(x);
                            y = y - A[x];
                        } else if (dp[x-1][y] == true) {
                            // Answer.push_back(x);
                        }
                        x--;
                    }
                    cout << Answer.size() << endl;
                    reverse(Answer.begin(), Answer.end());
                    for (int i=0; i < Answer.size();i++) {
                        if (i > 0) cout << " ";
                        cout << Answer[i];
                    }
                    cout << endl;
                    return 0;
                }
            } 
        }
    }

    cout << "-1" << endl;

    return 0;
}
