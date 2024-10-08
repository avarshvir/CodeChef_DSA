#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cumulativePlayer1 = 0, cumulativePlayer2 = 0;
    int maxLead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        cin >> score1 >> score2;

        cumulativePlayer1 += score1;
        cumulativePlayer2 += score2;

        int lead, currentWinner;
        if (cumulativePlayer1 > cumulativePlayer2) {
            lead = cumulativePlayer1 - cumulativePlayer2;
            currentWinner = 1;
        } else {
            lead = cumulativePlayer2 - cumulativePlayer1;
            currentWinner = 2;
        }

        if (lead > maxLead) {
            maxLead = lead;
            winner = currentWinner;
        }
    }

    cout << winner << " " << maxLead << endl;

    return 0;
}
