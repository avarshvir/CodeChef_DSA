#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int P,Q;
        cin >> P >> Q;
        int total_serves = P + Q;
        
        int serve_number = total_serves + 1; 
        int mod = (serve_number - 1) % 4; 
        
        if (mod == 0 || mod == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }   
    }
}
