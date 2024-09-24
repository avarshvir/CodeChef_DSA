#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int A,B,X,Y;
	    cin >> A >> B >> X >> Y;
	    double time_chef = static_cast<double>(A)/X;
	    double time_chefina = static_cast<double>(B)/Y;
	    if(time_chef < time_chefina){
	        cout << "Chef" << endl;
	    }else if(time_chef > time_chefina){
	        cout << "Chefina" << endl;
	    }
	    else{
	        cout << "Both" << endl;
	    }
	}

}
