#include <bits/stdc++.h>
using namespace std;

int main(){

    string entrada;
    cin >> entrada;
    int flag1 = 1, flag2 = 2, flag3 = 3;
    for(int i = 0; i < (int)entrada.size();i++){
        if(entrada[i] - '0' == 1) flag1--;
        if(entrada[i] - '0' == 2) flag2--;
        if(entrada[i] - '0' == 3) flag3--;
    }
    if(flag1 == 0 && flag2 == 0 && flag3 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}