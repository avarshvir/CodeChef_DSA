#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N,K;
	    cin >> N >> K;
	    int count_wolverine_like = 0;
	    for(int i = 0; i < N; ++i){
	        int characterstics;
	        cin >> characterstics;
	        if((characterstics+K)%7 == 0){
	            count_wolverine_like++;
	        }
	        
	    }
	    cout << count_wolverine_like << endl;
	}
}
