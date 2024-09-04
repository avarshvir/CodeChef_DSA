#include <bits/stdc++.h>
using namespace std;

int getFloor(int roomNumber) {
    return (roomNumber - 1) / 10 + 1;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;
        
        int floorX = getFloor(X);
        int floorY = getFloor(Y);

        int floorsToTravel = abs(floorX - floorY);

        cout << floorsToTravel << endl;
        
    }
}
