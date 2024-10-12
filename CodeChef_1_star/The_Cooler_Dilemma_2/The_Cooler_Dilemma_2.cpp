#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    long long X,Y;
	    cin >> X >> Y;
	   if (Y <= X) {
            cout << 0 << endl; 
        } else {
            long long max_months = (Y - 1) / X;
            cout << max_months << endl;
        }
	}

}
