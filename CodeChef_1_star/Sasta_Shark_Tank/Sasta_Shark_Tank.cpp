#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int A,B;
        cin >> A >> B;
        int valuation_first = A*10;
        int valuation_second = B*5;
        if(valuation_first  > valuation_second){
            cout << "FIRST" << endl;
        }
        else if(valuation_second > valuation_first){
            cout << "SECOND" << endl;
        }
        else{
            cout << "ANY" << endl;
        }
    }
}
