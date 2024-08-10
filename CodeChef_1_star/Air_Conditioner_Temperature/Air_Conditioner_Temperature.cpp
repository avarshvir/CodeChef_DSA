#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int A,B,C;
	    cin >> A >> B >> C;
	    if(A <= B && C <= B){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}

}
