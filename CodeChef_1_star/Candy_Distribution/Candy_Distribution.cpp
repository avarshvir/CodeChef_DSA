#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N,M;
	    cin >> N >> M;
	     if (N % M == 0) {
            int candies_per_friend = N / M;
            if (candies_per_friend % 2 == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "No" << endl;
        }
	}

}
