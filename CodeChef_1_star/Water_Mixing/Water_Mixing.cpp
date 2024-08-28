#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T; 
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y; 
        
        int temperature_difference = B - A; 
        
        if (temperature_difference > 0) {
            
            if (temperature_difference <= X) {
                cout << "YES" << endl; 
            } else {
                cout << "NO" << endl; 
            }
        } else if (temperature_difference < 0) {
            
            if (-temperature_difference <= Y) {
                cout << "YES" << endl; 
            } else {
                cout << "NO" << endl; 
            }
        } else {
            
            cout << "YES" << endl;
        }
    }

    return 0;
}
