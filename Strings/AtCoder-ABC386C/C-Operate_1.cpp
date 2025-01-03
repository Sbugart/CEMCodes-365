#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, flagd = 0, difs = 0, difst;
    string s, t;
    cin >> k >> s >> t;
    if(abs((int)s.size() - (int)t.size()) == k) flagd = 1;
    difst = abs((int)s.size() - (int)t.size());
    int poss = 0, post = 0;
    while((poss <= (int)s.size() - 1) || (post <= (int)t.size() - 1)){
        if(s[poss] != t[post]){
            if(flagd){
                if(difst != 0){
                    if(s.size() > t.size()) poss++;
                    else post++;
                    difst--;
                    if(difst == 0) flagd = 0;
                }
                difs++;
            }
            else{
                poss++; post++; difs++;
            }
        }
        else{
            poss++; post++;
        }
    }
    if(difs + difst <= k) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}