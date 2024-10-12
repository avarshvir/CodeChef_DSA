#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    if(number <= 1) return false;
    if(number <= 3) return true;
    
    if(number % 2 == 0 || number % 3 == 0) return false;
    
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        if (isPrime(N)) {
          cout << "yes" << endl;
    } else {
          cout << "no" << endl;
    }
    }
	

}
