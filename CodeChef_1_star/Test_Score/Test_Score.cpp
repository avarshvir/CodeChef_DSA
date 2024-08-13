#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N, X, Y;
        cin >> N >> X >> Y;
        
        if(Y <= N*X && Y%X == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}
