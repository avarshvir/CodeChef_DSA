#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N,A,B,C;
	    cin >> N >> A >> B >> C;
	    
	    bool canServe = false;
	     for (int type1 = 0; type1 <= min(A, B); ++type1) {
            int remainingVegetables = B - type1;
            int type2 = min(remainingVegetables, C);
            if (type1 + type2 >= N) {
                canServe = true;
                break;
            }
        }
        
        cout << (canServe ? "YES" : "NO") << endl;
	    
	}

}
