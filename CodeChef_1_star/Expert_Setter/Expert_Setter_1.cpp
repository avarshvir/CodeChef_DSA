// Method: 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;
        if(2*Y >= X){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
