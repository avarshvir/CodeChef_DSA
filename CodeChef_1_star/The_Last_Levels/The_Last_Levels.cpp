#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        int playTime = X * Y;
        
        int numberOfBreaks = (X - 1) / 3; 
        int breakTime = numberOfBreaks * Z;
        
        int totalTime = playTime + breakTime;
        
        cout << totalTime << endl;
    }


}
