#include <iostream>
#include <algorithm> // For std::sort function

using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        
        // Create an array with the three numbers
        int arr[3] = {A, B, C};
        
        // Sort the array
        sort(arr, arr + 3);
        
        // The second largest number is now the second-to-last element
        cout << arr[1] << endl;
    }
    
    return 0;
}
