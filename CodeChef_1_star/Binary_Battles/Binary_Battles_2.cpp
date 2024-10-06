#include <bits/stdc++.h>
using namespace std;

int main() {
     int T; 
    cin >> T; 

    while (T--) {
        long long N, A, B;
        cin >> N >> A >> B; 

        int rounds = 0;
        while (N > 1) { 
            N /= 2; 
            rounds++; 
        }

        long long total_time = (rounds * A) + ((rounds - 1) * B);
        
        cout << total_time << endl;
        }
}
