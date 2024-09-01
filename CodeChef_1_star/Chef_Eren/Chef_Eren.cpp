#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N,A,B;
        cin >> N >> A >> B;
        int count_odds = (N+1)/2;
        int count_evens = N/2;
        
        int total_duration = count_evens*A + count_odds*B;
        cout << total_duration << endl;
    }
}
