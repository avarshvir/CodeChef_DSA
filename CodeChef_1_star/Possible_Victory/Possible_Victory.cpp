#include <bits/stdc++.h>
using namespace std;

int main() {
	int R,O,C;
	cin >> R >> O >> C;
	int max_additional_score = (20-O)*36;
	int final_score = C + max_additional_score;
	if(final_score > R){
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}

}