#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int X,A,B;
	    cin >> X >> A >> B;
	    
	    if((A*1) + (B*2) >= X){
	        cout << "Qualify" << endl;
	    }
	    else{
	        cout << "NotQualify" << endl;
	    }
	    
	}
	
	return 0;
}
