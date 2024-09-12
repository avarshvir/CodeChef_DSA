#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int A,B,C;
        cin >> A >> B >> C;
         
        int secondLargest;
        
        if ((A > B && A < C) || (A < B && A > C)) {
            secondLargest = A;
        } else if ((B > A && B < C) || (B < A && B > C)) {
            secondLargest = B;
        } else {
            secondLargest = C;
        }
        
        cout << secondLargest << endl;
    }
}
