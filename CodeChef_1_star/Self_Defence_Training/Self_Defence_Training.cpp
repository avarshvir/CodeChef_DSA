#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int count = 0;
        
        for(int i = 0; i < N; i++){
            int A;
            cin >> A;
            if(A >= 10 && A <= 60){
                ++count;
            }
        }
        cout << count << endl;
    }
}
