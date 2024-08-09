// using max function
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int temp = max(0, N - X);
        int packets_needed = (temp + 3) / 4;
        cout << packets_needed << endl;
    }
    return 0;
}
