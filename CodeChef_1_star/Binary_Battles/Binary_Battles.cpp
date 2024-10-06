#include <iostream>
#include <cmath> // For log2
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        long long N, A, B;
        cin >> N >> A >> B;

      
        int rounds = log2(N);
        
       
        long long total_time = (rounds * A) + ((rounds - 1) * B);

        cout << total_time << endl;
    }

    return 0;
}
