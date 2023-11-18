#include<bits/stdc++.h>
using namespace std;

int main() { 
    int N;

    cin >> N;

    double left, right;
    left = 0;
    right = N;

    while (abs(right - left)  >=  0.0001) {
        double mid = (left + right) / 2;
        double sum = mid + pow(mid,3);
        if (sum >= double(N)){
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << right << endl;

    return 0;
}
