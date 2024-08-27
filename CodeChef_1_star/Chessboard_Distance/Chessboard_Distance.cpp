#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int X1,Y1,X2,Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        int maximumX = abs(X1-X2);
        int maximumY = abs(Y1-Y2);
        int result = max(maximumX,maximumY);
        cout << result << endl;
    }
}
