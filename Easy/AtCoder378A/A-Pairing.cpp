#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> entrada(4);
    vector<int> foi(4, 0);
    int cont = 0;
    for(int i = 0; i < 4; i++){
        cin >> entrada[i];
    }
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(entrada[i] == entrada[j] && foi[j] == 0 && foi[i] == 0){
                foi[j] = 1;
                foi[i] = 1;
                cont ++;
                break;
            }
        }
    }
    cout << cont << endl;
    return 0;
}