#include <bits/stdc++.h>
using namespace std;

int main(){

    string entrada;
    int possui = 0;
    cin >> entrada;
    for(int i = 0; i < 3; i++){
        possui = possui | (1 << (entrada[i] - 'A'));
    }
    if(possui == 7) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}