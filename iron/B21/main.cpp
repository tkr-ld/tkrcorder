#include<bits/stdc++.h>
using namespace std;

int main() { 

    int minValue = min(1, 1);

    string S,T;

    cin >> S >> T;

    int dp[2009][2009];

    dp[0][0] = 0;
    for (int i = 1; i <= S.length();i++) dp[i][0] = i;
    for (int i = 1; i <= T.length();i++) dp[0][i] = i;

    for (int j = 1; j <= T.length();j++) {
        for (int i = 1; i <= S.length();i++) {
            if(S[i-1] == T[j-1]) {
                 int minValue = min(dp[i-1][j]+1, dp[i][j-1]+1); 
                 minValue = min(minValue, dp[i-1][j-1]); 
                 dp[i][j] = min(minValue, dp[i-1][j-1]); 

            } else if (S[i-1] != T[j-1]) {
                int minValue = min(dp[i-1][j]+1, dp[i][j-1]+1); 
                 dp[i][j] = min(minValue, dp[i-1][j-1]+1); 
            }
        }
    }

    cout << dp[S.length()][T.length()] << endl;

    return 0;
}
