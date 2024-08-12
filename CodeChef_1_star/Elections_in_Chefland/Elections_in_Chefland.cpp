#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, X; // Number of people and minimum age to vote
        cin >> N >> X;

        int ages[100]; // Array to hold ages of people, assuming N <= 100

        // Read ages
        for (int i = 0; i < N; ++i) {
            cin >> ages[i];
        }

        // Count eligible voters
        int eligibleCount = 0;
        for (int i = 0; i < N; ++i) {
            if (ages[i] >= X) {
                eligibleCount++;
            }
        }

        // Output the result for this test case
        cout << eligibleCount << endl;
    }

    return 0;
}

