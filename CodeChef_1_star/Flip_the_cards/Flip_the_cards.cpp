#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N, X;
	    cin >> N >> X;
	    int face_down = N - X;
        cout << min(X, face_down) << endl;
	}

}
