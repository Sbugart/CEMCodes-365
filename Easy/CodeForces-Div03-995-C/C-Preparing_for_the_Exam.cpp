#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    for(int ca = 0; ca < casos; ++ca){
        int n,m,k, aux;
        cin >> n >> m >> k;
        map<int, int> sabe;
        vector<int> lista(m);
        for(auto& l : lista) cin >> l;
        for(int i = 0; i < k; i++){
            cin >> aux;
            sabe.insert({aux, aux});
        }
        for(const auto& l : lista){
            auto search = sabe.find(l);
            if(k == n) cout << 1;
            else{
                if(search != sabe.end()) cout << 0;
                else{
                    if(k + 1 == n) cout << 1;
                    else cout << 0;
                }
            }
      
        }
        cout << endl;

    }
    return 0;
}