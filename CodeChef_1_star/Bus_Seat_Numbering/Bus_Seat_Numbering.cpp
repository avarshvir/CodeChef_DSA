#include <iostream>
#include <string>
using namespace std;

// Function to get the seat type based on the seat number
string get_seat_type(int seat) {
    if (seat >= 1 && seat <= 10) {
        return "Lower Double";
    } else if (seat >= 11 && seat <= 15) {
        return "Lower Single";
    } else if (seat >= 16 && seat <= 25) {
        return "Upper Double";
    } else if (seat >= 26 && seat <= 30) {
        return "Upper Single";
    }
    //return "Invalid Seat"; // Just in case; not necessary with current constraints
}

int main() {
    int T;
    cin >> T; // Read the number of test cases
    
    while (T--) {
        int N;
        cin >> N; // Read the seat number for each test case
        cout << get_seat_type(N) << endl; // Output the seat type
    }

    return 0;
}
