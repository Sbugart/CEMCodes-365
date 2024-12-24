#include <bits/stdc++.h>
using namespace std;

int main(){

    int leng, day, boxes = 0;
    string lei;
    cin >> leng >> day >> lei;
    for(int i = 0; i < leng; i++){
        if(day > 0 && lei[i] == '@'){
            lei[i] = '.';
            day--;
        }
        if(lei[i] == '.') boxes ++;
    }
    cout << boxes << endl;

    return 0;
}