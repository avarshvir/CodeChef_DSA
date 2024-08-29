#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int W,X,Y,Z;
        cin >> W >> X >> Y >> Z;
        bool can_measure = false;
        
        if (W == X || W == Y || W == Z || 
            W == X + Y || W == X + Z || W == Y + Z || 
            W == X + Y + Z) {
            can_measure = true;
        }
        
        if (can_measure) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }	
}
