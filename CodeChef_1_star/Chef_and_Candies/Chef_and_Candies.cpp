#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N, X;
        cin >> N >> X;
        int temp; 
        /*
        temp is the number of additional candies Chef needs to buy in order to have enough candies to distribute one to each of the N children
        */
        if (N > X) {
            temp = N - X;
        } else {
            temp = 0;
        }
        
        int packets_needed = (temp + 3) / 4;
        cout << packets_needed << endl;
	}

}
