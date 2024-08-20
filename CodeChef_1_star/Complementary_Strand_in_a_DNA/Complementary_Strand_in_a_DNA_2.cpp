#include <bits/stdc++.h>
using namespace std;

string getComplementaryStrand(const string &strand) {
    string complementaryStrand;
    for (char nucleotide : strand) {
        switch (nucleotide) {
            case 'A': complementaryStrand += 'T'; break;
            case 'T': complementaryStrand += 'A'; break;
            case 'C': complementaryStrand += 'G'; break;
            case 'G': complementaryStrand += 'C'; break;
            default: break; }
    }
    return complementaryStrand;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        
        cout << getComplementaryStrand(S) << endl;
    }
    
    return 0;
}
