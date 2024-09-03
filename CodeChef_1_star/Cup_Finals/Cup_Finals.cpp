#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int X,Y,D;
        cin >> X >> Y >> D;
        if(abs(X - Y) <= D){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
