#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int A,B,C,D;
	    cin >> A >> B >> C >> D;
	    if((A + C == 180) && (B + D == 180)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}

}
