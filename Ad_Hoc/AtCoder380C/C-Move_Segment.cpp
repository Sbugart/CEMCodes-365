#include <bits/stdc++.h>
using namespace std;

int main(){

    string s,t;
    int n, k, cont = 1, flag = 0;
    vector<int> blocos_pos;
    int posk = 0;
    cin >> n >> k;
    cin >> s;
    t.resize(n);
    blocos_pos.clear();
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(flag == 0){
                if(cont == k){
                    posk = blocos_pos.size();
                }
                blocos_pos.push_back(i);
                cont++;
                flag = 1;
            }
        }
        else{
            if(flag == 1){
                flag = 0;
                blocos_pos.push_back(i - 1);
            }
        }
        t[i] = s[i];
    }
    if(s[n - 1] == '1') blocos_pos.push_back(n - 1);
    k = 0;
    for(int i = blocos_pos[posk]; i <= blocos_pos[posk + 1]; i++){
        t[blocos_pos[posk - 1] + 1 + k] = s[i];
        t[i] = '0';
        k++;
        n = i;
    }
    cout << t << endl;


    return 0;
}
