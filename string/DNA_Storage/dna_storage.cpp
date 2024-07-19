#include <bits/stdc++>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string result;
        for (int i = 0; i < n; i += 2) {
            string pair = s.substr(i, 2);  
            if (pair == "00") result += 'A';
            else if (pair == "01") result += 'T';
            else if (pair == "10") result += 'C';
            else if (pair == "11") result += 'G';
        }
        
        
        cout << result << endl;
        
    }

}