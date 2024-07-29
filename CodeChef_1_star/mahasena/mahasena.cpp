#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int lucky = 0;
	int unlucky = 0;
	
	for(int i = 0; i < N; i++){
	    int weapons;
	    cin >> weapons;
	    if(weapons % 2 == 0){
	        lucky++;
	    }else{
	        unlucky++;
	    }
	}
	
	if(lucky > unlucky){
	    cout << "READY FOR BATTLE" << endl;
	}
	else{
	    cout << "NOT READY" << endl;
	}
	

}
