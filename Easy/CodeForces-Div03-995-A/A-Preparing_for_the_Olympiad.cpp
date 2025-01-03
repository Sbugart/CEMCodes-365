#include <bits/stdc++.h>
using namespace std;

int main(){
    int caso;
    cin >> caso;
    for(int ca = 0; ca < caso; ++ca){
        int n, m = 0, s = 0, flag = 0;
        cin >> n;
        vector<int> as(n), bs(n);
        for(auto& a : as) cin >> a;
        for(auto& b : bs) cin >> b;
        for(int i = 1; i <= n; ++i){
            if(flag == 1){
                s += bs[i - 1];
                flag = 0;
            }
            if(i < n){
                if(as[i - 1] - bs[i] > 0){
                    m += as[i - 1];
                    flag = 1;
                }
            }
            if(i == n){
                m += as[i - 1];
                flag = 1;
            }
        }
        cout << abs(m - s) << endl;
    }
    return 0;
}