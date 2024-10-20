#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read number of test cases
    while (T--) {
        int N, S;
        cin >> N >> S;  // Read N and S

        // Calculate valid bounds for T1
        int lower_bound = max(0, S - N);
        int upper_bound = min(N, S);

        // Calculate the maximum absolute differences
        int max_difference_lower = abs(2 * lower_bound - S);
        int max_difference_upper = abs(2 * upper_bound - S);

        // The result for this test case is the maximum of the two differences
        int result = max(max_difference_lower, max_difference_upper);
        cout << result << endl;  // Output the result
    }
    return 0;
}
