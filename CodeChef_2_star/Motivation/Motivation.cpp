#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N,X;
        cin >> N >> X;
        int maxRating = -1;
        for (int i = 0; i < N; ++i) {
            int S, R;
            cin >> S >> R; // space required and IMDB rating
            if (S <= X) { // Check if the movie can fit
                maxRating = max(maxRating, R); // Update max rating
            }
        }
        cout << maxRating << endl;
    }
}
