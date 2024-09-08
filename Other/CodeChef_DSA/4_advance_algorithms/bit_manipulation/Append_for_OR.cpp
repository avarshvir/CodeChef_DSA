#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    while (T--) {
        int N, Y;
        cin >> N >> Y;

        int currentOR = 0;
        for (int i = 0; i < N; ++i) {
            int A;
            cin >> A;
            currentOR |= A;
        }

        if ((currentOR & Y) != currentOR) {
            cout << -1 << endl;
        } else {
            cout << (Y & ~currentOR) << endl;
        }
    }


}
