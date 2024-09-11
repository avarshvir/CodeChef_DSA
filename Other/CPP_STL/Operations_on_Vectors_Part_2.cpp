#include <bits/stdc++.h>

using namespace std;

long long mul(long long x, long long y){
    return 1LL * x * y;
}
int main() {

  int tests, n, val;
  cin >> tests;

  vector<long long> nums;

  while(tests--){
    cin >> n;
    nums.clear();
    int min_val = 1e9, max_val = 0;

    for(int i = 0; i < n; i++){
        cin >> val;
        max_val = max(max_val, val);
        min_val = min(min_val, val);
        nums.push_back(val);
    }
   
    vector<long long> p_sum(n);
    partial_sum(nums.begin(), nums.end(), p_sum.begin());
    long long p_sum_product = accumulate(p_sum.begin(), p_sum.end(), 1LL, mul);
    cout << p_sum_product << " ";
    if(p_sum_product % min_val == 0 && p_sum_product % max_val == 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
  }

  return 0;
} 