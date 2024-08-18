#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int X;
        cin >> X;  
        switch (X % 3) {
            case 0:
                cout << "NORMAL" << endl;
                break;
            case 1:
                cout << "HUGE" << endl;
                break;
            case 2:
                cout << "SMALL" << endl;
                break;
        }
    }
}
