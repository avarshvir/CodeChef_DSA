#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        // Output the complementary strand directly
        for (int i = 0; i < N; ++i) {
            switch (S[i]) {
                case 'A': cout << 'T'; break;
                case 'T': cout << 'A'; break;
                case 'C': cout << 'G'; break;
                case 'G': cout << 'C'; break;
            }
        }
        cout << endl; // Newline after each test case
    }

    return 0;
}
