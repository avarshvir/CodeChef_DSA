#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int A, B, C;
	    cin >> A >> B >> C;
	    int minPrice = min({A, B, C}); 
        int totalPrice = A + B + C; 
        int amountToPay = totalPrice - minPrice; 

        cout << amountToPay << endl;
	}

}
