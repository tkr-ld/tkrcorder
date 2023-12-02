#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int input;
        cin >> input;
        a.push_back(input);
    }

    vector<int> b;
    copy(a.begin(),a.end(),back_inserter(b));
    sort(b.begin(),b.end());


    for(int i=0;i<n;i++) {
        int pos = lower_bound(b.begin(),b.end(),a[i]+1)-b.begin(); 
        vector<int> c;
        copy(b.begin()+pos,b.end(),back_inserter(c));
        cout << accumulate(c.begin(),c.end(),0) << " ";
    }

    cout << endl;
}
