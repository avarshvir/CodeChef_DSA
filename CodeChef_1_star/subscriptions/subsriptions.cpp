#include <iostream>
#include <cmath> // for ceil function
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        // Calculate number of subscriptions needed
        int num_subscriptions = ceil((double)N / 6);

        // Calculate total cost
        int total_cost = num_subscriptions * X;

        // Output the total cost for this test case
        cout << total_cost << endl;
    }

    return 0;
}