#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int N;
        cin >> N; 
        int sqrtN = static_cast<int>(sqrt(N));
        
        cout << sqrtN << endl;
    }
    
    return 0;
}
