#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int X;
        cin >> X;
        
        if (X % 5 != 0) {
            cout << -1 << endl;
        } else {
            int num_10 = X / 10;
            int remaining = X % 10;
            int num_5 = remaining / 5;
            cout << num_10 + num_5 << endl;
        }
    }
}
