#include <bits/stdc++.h>
using namespace std;

int main() {
    int A = 3144;
    if(A & (1 << 3)) {
        cout << "The 3rd bit is set\n";
    }
    else {
        cout << "The 3rd bit is unset\n";
    }

    if(A & (1 << 0)) {
        cout << "The 0th bit is set\n";
    }
    else {
        cout << "The 0th bit is unset\n";
    }

    
    int C = A | (1 << 0);
    cout << "After setting the 0th bit in A: " << C << "\n";

    int D = A ^ (1 << 3);
    cout << "After flipping the 3rd bit in A: " << D << "\n";

    return 0;
}