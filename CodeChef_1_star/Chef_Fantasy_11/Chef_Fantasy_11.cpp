#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    return n*(n-1);
}

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    cout  << fact(N) << endl;
	}

}
