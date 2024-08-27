#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    
	    int moveY = X/Y;
	    int remainder = X%Y;
	    
	    int moves = moveY + remainder;
	    cout << moves << endl;
	    
	}

}
