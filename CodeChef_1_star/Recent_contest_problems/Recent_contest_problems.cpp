#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    vector<string> contestCodes(N);
	    
	    for(int i = 0; i < N; i++){
	        cin >> contestCodes[i];
	    }
	    
	    int countSTART38 = 0;
        int countLTIME108 = 0;
        
        for (const auto& code : contestCodes) {
            if (code == "START38") {
                countSTART38++;
            } else if (code == "LTIME108") {
                countLTIME108++;
            }
        }
        
        cout << countSTART38 << " " << countLTIME108 << endl;
	    
	}

}
