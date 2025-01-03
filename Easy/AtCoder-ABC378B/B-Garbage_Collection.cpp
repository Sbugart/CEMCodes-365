#include <bits/stdc++.h>
using namespace std;

struct lixos
{
    long long int r;
    long long int q;
};


int main(){

    int tipos, queries;
    long long int d, t, aux;
    cin >> tipos;
    vector<lixos> vec(tipos);
    for(int i = 0; i < tipos; i++){
        cin >> vec[i].q >> vec[i].r;
    }
    cin >> queries;
    for(int i = 0; i < queries; i++){
        cin >> t >> d;
        if(vec[t - 1].r >= d) cout << vec[t - 1].r << endl;
        else{
            if(vec[t - 1].r + vec[t - 1].q >= d) cout << vec[t - 1].r + vec[t-1].q << endl;
            else{
                aux = d - vec[t - 1].r - vec[t - 1].q;
                aux = aux / vec[t - 1].q;
                if(vec[t - 1].r + vec[t - 1].q + vec[t - 1].q * aux >= d) cout << vec[t - 1].r + vec[t - 1].q + vec[t - 1].q * aux << endl;
                else{
                    cout << vec[t - 1].r + vec[t - 1].q + vec[t - 1].q * (aux + 1) << endl;
                }
            }
        }
    }
    
    return 0;
}