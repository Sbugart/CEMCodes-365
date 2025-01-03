#include<bits/stdc++.h>
using namespace std;

struct cell{
    long long int x, y;
    string color;
};

int main(){

    long long int n, m;
    cin >> n >> m;
    vector<cell> matriz(m);
    for(auto& mat : matriz){
        cin >> mat.x >> mat.y >> mat.color;
    }
    sort(matriz.begin(), matriz.end(), [](cell a, cell b){
        if(a.x == b.x) return a.y < b.y;
        return a.x < b.x;   
    });
    vector<cell> b, w;
    long long int minb = -1;
    int flag = 0;
    for(int i = (int)matriz.size() - 1; i >= 0; --i){
        if(matriz[i].color == "B") minb = max(minb, matriz[i].y);
        if(matriz[i].color == "W"){
            if(matriz[i].y <= minb) flag = 1;
        }
    }
    if(flag) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}