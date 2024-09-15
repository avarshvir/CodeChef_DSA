#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N, X, P;
	    cin >> N >> X >> P;
	    
	    //int incorrect_ans = N-X;
	    //int correct_score = 3*X;
	    //int incorrect_score = -1*(N-X)
	    
	    int total_score = 4*X-N;
	    if(total_score >= P){
	        cout << "PASS" << endl;
	    }
	    else{
	        cout << "FAIL" << endl;
	    }
	    
	}

}
