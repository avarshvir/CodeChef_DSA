#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int A,B,K;
	    cin >> A >> B >> K;
	    
	    int dis = abs(A-B);
	    int steps = (dis+K-1)/K;
	    
	    cout << steps << endl;
	    
	}

}
