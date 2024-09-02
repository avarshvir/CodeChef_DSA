#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int X,N;
        cin >> X >> N;
        int plane_needed = (N+99)/100;
        int plane_to_buy = max(0,plane_needed - X);
        cout << plane_to_buy << endl;
    }
}
