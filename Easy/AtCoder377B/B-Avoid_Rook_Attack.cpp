#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> grid(8);
    int total = 0;
    vector<vector<int>> pode(8);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            pode[i].push_back(1);
        }
    }

    for(int i = 0; i < 8; i++){
        cin >> grid[i];
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(grid[i][j] == '#'){
                for(int m = 0; m < 8; m++){
                    pode[m][j] = 0;
                    pode[i][m] = 0;
                }
            }
        }
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(pode[i][j] == 1) total++;
        }
    }
    cout << total << endl;
}