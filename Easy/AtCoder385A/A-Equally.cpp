#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> entrada(3);
    for(auto& valor : entrada)cin >> valor;
    if(entrada[0] == entrada[1] && entrada[0] == entrada[2]){
        cout << "Yes" << endl;
    }
    else{
        sort(entrada.begin(), entrada.end());
        if(entrada[0] + entrada[1] == entrada[2]) cout << "Yes\n";
        else cout << "No\n";
    }


    return 0;
}