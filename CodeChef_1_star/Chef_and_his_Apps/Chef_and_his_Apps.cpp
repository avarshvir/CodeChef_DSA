#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int S,X,Y,Z;
        cin >> S >> X >> Y >> Z;
        int total_memory_usuage = X+Y;
        int memory_left = S - total_memory_usuage;
        if(memory_left >= Z){
            cout << 0 << endl;
        }
        else if ((S - X >= Z) || (S - Y >= Z)) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
}
