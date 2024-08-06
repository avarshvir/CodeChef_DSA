// Method: 2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        float X,Y;
        cin >> X >> Y;
        if((Y/X)*100 >= 50){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
