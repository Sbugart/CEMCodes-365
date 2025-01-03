#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> card(4);
    for(auto& c : card) cin >> c;
    sort(card.begin(), card.end());
    int quant1 = 0, aux1 = card[0], quant2 = 0, aux2 = card[3];
    int flag = 0;
    for(auto& c : card){
        if(aux1 == c) quant1++;
        else if(aux2 == c) quant2++;
    }
    if(quant1 == 1 && quant2 == 3) flag = 1;
    else if(quant1 == 3 && quant2 == 1) flag = 1;
    else if(quant1 == 2 && quant2 == 2) flag = 1;
    if(flag) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}