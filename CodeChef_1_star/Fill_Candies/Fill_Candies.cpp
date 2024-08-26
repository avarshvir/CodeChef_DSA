#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N,K,M;
	    cin >> N >> K >> M;
	    int capacity_per_bag = K*M;
	    int number_of_bags = (N + capacity_per_bag - 1)/capacity_per_bag;
	    cout << number_of_bags << endl;
	    
	}

}
