#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;  // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }
    
    return reversed;
}

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    
	    
        int reversedNumber = reverseNumber(N);
        
        cout << reversedNumber << endl;
	    
	}

}
