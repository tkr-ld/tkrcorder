#include<bits/stdc++.h>
using namespace std;

int main() { 
    int D;
    cin >> D;

    float f = sqrt(D);
    int a = float(f);

    int min = D;
    for (int i = a; i >= 0; i--){
        for (int j = a; j >= 0; j--){
            int target = abs(pow(i, 2) + pow(j, 2) - D);
            if (min >= target){
                min = target;
            }
        }
    }

    cout << min << endl;

    return 0;
}
