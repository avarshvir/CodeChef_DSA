#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,M;
    cin >> N >> M;
    vector<int> v1(N);
    vector<int> v2(M);

    for(int i = 0; i < N; i++){
        cin >> v1[i];
    }
    
    for(int i = 0; i < N; i++){
        cin >> v2[i];
    }

    vector<int> v;

    if(is_sorted(v1.begin(),v1.end()) && is_sorted(v2.begin(), v2.end())){
        v.resize(N+M);
        merge(v1.begin(),v1.end(), v2.begin(), v2.end(), v.begin());

        for(int k = 0; k < v.size(); k++){
            cout << v[k] << " ";
        } 
    }
    else{
        if(N>=M){
            reverse(v1.begin(),v1.end());
            for(int i = 0; i < v1.size(); i++){
                cout << v1[i] << " ";
            }
        }
        else{
            reverse(v2.begin(), v2.end());
            for(int i = 0; i < v2.size(); i++){
                cout << v2[i] << " ";
            }
        }
    }
    return 0;
}