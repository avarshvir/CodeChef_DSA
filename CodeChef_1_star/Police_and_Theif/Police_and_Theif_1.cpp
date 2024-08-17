#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    if(X > Y){
	        cout << X-Y << endl;
	    }
	    else if(X < Y){
	        cout << Y-X << endl;
	    }
	    else{
	        cout << 0 << endl;
	    }
	}

}
