#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int X,Y;
        cin >> X >> Y;
        if(X > Y){
            cout << "CAR" << endl; 
        }
        else if(X < Y){
            cout << "BIKE" << endl;
        }
        else{
            cout << "SAME" << endl;
        }
    }
}
