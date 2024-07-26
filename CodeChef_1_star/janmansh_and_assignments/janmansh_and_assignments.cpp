#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X;
        cin >> X;
        if(X <= 7){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}