#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int count = 0;
        while (N--) {
            int Di;
            cin >> Di;
            if (Di >= 1000) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
