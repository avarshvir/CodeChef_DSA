#include <bits/stdc++.h>
using namespace std;

int main() {
	int tests, n, val;
	cin >> tests;
	vector<int> nums;
	while(tests--){
	    cin >> n;
	    nums.clear();
	    for(int i = 0; i < n; i++){
	        cin >> val;
	        nums.push_back(val);
	    }
	    if(n%3 ==0){
	        if(n%2 == 1){
	            cout << nums[n/2] << endl;
	        }
	        else{
	            cout << nums.front() << " " << nums.back() << endl;
	        }
	    }
	    else{
	        cout << nums.front() + nums.back() << endl;
	    }
	}

}
