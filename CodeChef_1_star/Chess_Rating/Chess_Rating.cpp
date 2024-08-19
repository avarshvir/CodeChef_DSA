#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;
        int temp = ((Y-X)+7)/8;
        cout << temp << endl;
    }
}
