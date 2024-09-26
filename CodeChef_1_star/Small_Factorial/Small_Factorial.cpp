#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    cout << fact(N) << endl;
	}
}
