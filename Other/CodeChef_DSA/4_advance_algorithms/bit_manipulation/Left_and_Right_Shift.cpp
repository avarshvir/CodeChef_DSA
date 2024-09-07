#include <bits/stdc++.h>
using namespace std;

int main() {
    int A = 341;
    int B = 4;

    int LEFT = A << B;
    int RIGHT = A >> B;

    cout << "The LEFT shift is: " << LEFT << "\n";
    cout << "The RIGHT shift is: " << RIGHT << "\n";
}