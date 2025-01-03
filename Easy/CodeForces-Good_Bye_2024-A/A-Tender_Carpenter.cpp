#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> as(n);
        for(auto& a : as) cin >> a;
        int ant = as[0];
        int flag = 0;
        for(int i = 1; i < n; ++i){
            int menor = min(ant, as[i]);
            int maior = max(ant, as[i]);
            if(2*menor > maior) flag = 1;
            ant = as[i];
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}