#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T; 
	while(T--){
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    
	    int time_to_hit = Y/X;
	    
	    int wait_time = Z - time_to_hit;

        wait_time = max(0, wait_time);

        cout << wait_time << endl;
	}

}
