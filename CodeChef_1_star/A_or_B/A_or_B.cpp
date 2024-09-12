#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    
	    int points_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        
        int points_B_first = (1000 - 4 * Y) + (500 - 2 * (Y + X));
        
        int max_points = max(points_A_first, points_B_first);
        
        cout << max_points << endl;
	}
}
