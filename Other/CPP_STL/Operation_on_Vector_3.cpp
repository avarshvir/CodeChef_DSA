#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,x;
    cin >> N >> x;

    vector<int> nums(N);
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }

    replace(nums.begin(), nums.end(), x, x+1);
    
    for(int i = 0; i < N; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}