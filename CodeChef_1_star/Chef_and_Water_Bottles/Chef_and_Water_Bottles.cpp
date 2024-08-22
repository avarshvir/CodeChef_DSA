#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
         
        cout << min(N, K / X) << endl;
    }
    
    return 0;
}
