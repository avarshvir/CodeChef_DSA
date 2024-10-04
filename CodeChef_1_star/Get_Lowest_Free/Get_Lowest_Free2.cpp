#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while(T--) {
        int A, B, C;
        cin >> A >> B >> C; 
        
        int minPrice;

        if (A <= B && A <= C) {
            minPrice = A; 
        } else if (B <= A && B <= C) {
            minPrice = B; 
        } else {
            minPrice = C; 
        }

        int totalPrice = A + B + C;

        int amountToPay = totalPrice - minPrice;

        cout << amountToPay << endl;
    }
    return 0;
}
