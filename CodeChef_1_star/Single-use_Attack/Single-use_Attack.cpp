#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y; 

        int normal_attacks_needed = (H + X - 1) / X;

        int attacks_with_special = 0;
        if (H > Y) { 
            int remaining_health = H - Y;
            int normal_attacks_after_special = (remaining_health + X - 1) / X;
            attacks_with_special = 1 + normal_attacks_after_special;
        } else {
            attacks_with_special = 1; 
        }

        int min_attacks = min(normal_attacks_needed, attacks_with_special);
        cout << min_attacks << endl;
    }
    return 0;
}
