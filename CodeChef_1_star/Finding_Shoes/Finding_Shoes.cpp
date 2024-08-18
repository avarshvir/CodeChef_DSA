#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N,M;
	    cin >> N >> M;
	    int additional_left_shoes = max(0,N-M);
	    int right_shoes_needed = N;
	    
	     int total_extra_shoes = additional_left_shoes+right_shoes_needed;
        
        cout << total_extra_shoes << endl;
	}

}
