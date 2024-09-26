#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int full_set = N/5;
        int remaining = N%5;
        int coin_needed = full_set*4+remaining;
        cout << coin_needed << endl;
    }
}
