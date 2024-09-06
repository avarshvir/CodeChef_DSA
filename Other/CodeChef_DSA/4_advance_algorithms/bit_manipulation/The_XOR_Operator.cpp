#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    A = 5; // 5 = 101 in Binary
    B = 11; // 11 = 1011 in Binary

    int XOR = A & B; // 0101 ^ 1011

    cout << "The Bitwise XOR is: " << XOR << "\n";
    
    return 0;
}