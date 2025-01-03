#include <bits/stdc++.h>
using namespace std;

int main(){

    int linhas, colunas, x, y, casas = 0;
    cin >> linhas >> colunas >> x >> y;
    x--; y--;
    vector<string> mat(linhas);
    for(auto& linha : mat){
        cin >> linha;
    }
    string jogadas;
    cin >> jogadas;
    for(const auto& jog : jogadas){
        if(jog == 'U'){
            if(x != 0 && mat[x - 1][y] != '#'){
                x --;
                if(mat[x][y] == '@'){
                    casas++;
                    mat[x][y] = '.'; 
                }
            }
        }
        else if(jog == 'R'){
            if(y != (colunas -1) && mat[x][y + 1] != '#'){
                y++;
                if(mat[x][y] == '@'){
                    casas++;
                    mat[x][y] = '.'; 
                }
            }
        }
        else if(jog == 'D'){
            if(x != (linhas + 1) && mat[x + 1][y] != '#'){
                x ++;
                if(mat[x][y] == '@'){
                    casas++;
                    mat[x][y] = '.'; 
                }
            }
        }
        else if(jog == 'L'){
            if(y != 0 && mat[x][y - 1] != '#'){
                y --;
                if(mat[x][y] == '@'){
                    casas++;
                    mat[x][y] = '.'; 
                }
            }
        }
    }
    x++; y++;
    cout << x << " " << y << " " << casas << endl;
    return 0;
}