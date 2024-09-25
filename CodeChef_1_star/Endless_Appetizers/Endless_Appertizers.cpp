#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y, R;
        cin >> X >> Y >> R;

        int extraStick = R / 30;
        int totalStick = X + extraStick;

        int plates = totalStick / Y; 
        if (totalStick % Y != 0) { 
            plates++; 
        }

        cout << plates << endl; 
    }
    return 0;
}
