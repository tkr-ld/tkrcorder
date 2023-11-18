#include<bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    set <string>A;
    
    for (int i = 0; i < N - 1;i++) {
        if(i == 0) {
            string a = {S[i]};
            A.insert(a);
            continue;
        }
        for(int j = i ; j >= 0; j--) {
            if (S[j] == S[i]) {
                string s = S.substr(j,i-j+1);
                A.insert(s);
            } else {
                break;
            }
        }
    }
    cout << A.size() << endl;
}
