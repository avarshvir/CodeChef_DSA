#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    vector<int> alice(3), bob(3);
	    for(int i = 0; i < 3; i++){
	        cin >> alice[i];
	    }
	    for(int i = 0; i < 3; i++){
	        cin >> bob[i];
	    }
	    sort(alice.begin(),alice.end());
	    int alice_score = alice[1]+alice[2];
	    
	    sort(bob.begin(),bob.end());
	    int bob_score = bob[1]+bob[2];
	    
	    if(alice_score > bob_score){
	        cout << "Alice" << endl;
	    }
	    else if(alice_score < bob_score){
	        cout << "Bob" << endl;
	    }
	    else{
	        cout << "Tie" << endl;
	    }
	}

}
