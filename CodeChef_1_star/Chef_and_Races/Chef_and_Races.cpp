#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int X,Y,A,B;
        cin >> X >> Y >> A >> B;
        int gold_medal = 0;
        if(X!= A && X!= B){
            gold_medal++;
        }
        if(Y!= A && Y!=B){
            gold_medal++;
        }
        cout << gold_medal << endl;
        
    }
}
