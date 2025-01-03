#include <bits/stdc++.h>
using namespace std;

int main(){

    int leng, day;
    string lei;
    cin >> leng >> day >> lei;
    for(int i = leng - 1; i >= 0; i--){
        if(day > 0 && lei[i] == '@'){
            lei[i] = '.';
            day--;
        }
    }
    cout << lei << endl;

    return 0;
}