#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int sum1 = a+c;
        int sum2 = a+d;
        int sum3 = b+c;
        int sum4 = b+d;
        
        int tastiness = max(max(sum1,sum2),max(sum3,sum4));
        cout << tastiness << endl;
    }
}
