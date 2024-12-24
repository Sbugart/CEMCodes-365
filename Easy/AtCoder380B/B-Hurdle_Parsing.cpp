#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    vector<int> cont;
    cont.push_back(0);
    for(int i = 1; i < (int)s.size();i++){
        if(s[i] == '-'){
            cont.back()++;
        }
        else{
            cont.push_back(0);
        }
    }
    for(int i = 0; i < (int)cont.size() - 2;i++){
        cout << cont[i] << " ";
    }
    cout << cont[cont.size() - 2] << endl;


    return 0;
}