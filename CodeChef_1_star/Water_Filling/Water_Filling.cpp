#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int B1,B2,B3;
	    cin >> B1 >> B2 >> B3;
	    int empty_count = (B1==0) +  (B2==0) + (B3==0);
	    
	    if(empty_count >= 2){
	        cout << "Water filling time" << endl;
	    }
	    else{
	        cout << "Not now" << endl;
	    }
	}

}
