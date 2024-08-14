#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T; // Read the number of test cases

    while (T--) { // Process each test case
        int A, B, C; // Distances of the three throws
        std::cin >> A >> B >> C; // Read the distances

        // Find the maximum of the three distances
        int maxDistance;
        
        // Compare A with B
        if (A > B) {
            maxDistance = A;
        } else {
            maxDistance = B;
        }
        
        // Compare the result with C
        if (C > maxDistance) {
            maxDistance = C;
        }

        // Output the maximum distance
        std::cout << maxDistance << std::endl;
    }

    return 0;
}
