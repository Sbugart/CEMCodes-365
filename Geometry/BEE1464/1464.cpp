#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T> struct Point{
    T x, y;

    Point() : x(), y() {}
    Point(T x, T y) : x(x), y(y) {}
    template<typename Tp> Point(Point<Tp> p) : x(p.x), y(p.y) {}

    //Operações
    template<typename Tp> Point<T> operator-(Point<Tp> const& p) const { return Point<T>(x - p.x, y - p.y); }
    template<typename Tp> Point<T> operator+(Point<Tp> const& p) const { return Point<T>(x + p.x, y + p.y); }
    template<typename Tp> inline T dot(Point<Tp> const& p) const { return x * p.x + y * p.y; } //Dot product
    template<typename Tp> inline T cross(Point<Tp> const& p) const { return x * p.y - y * p.x; } //Cross product

};

vector<Point<double>> tira_repetido(vector<Point<double>> pt){ //Caso existam pontos repetidos 
    vector<Point<double>> aux{pt[0]};
    int j = 0;
    for(int i = 1; i < (int)pt.size(); i++){
        if((aux[j].x != pt[i].x) || (aux[j].y) != pt[i].y){
            aux.push_back(pt[i]);
            j++;
        }
    }
    pt.clear();
    pt = aux;
    return pt;
}

vector<Point<double>> lower(vector<Point<double>> p) {
    vector<Point<double>> lw{p[0], p[1]};
    for(int i = 2; i < (int)p.size(); i++){
        while (lw.size() >= 2u){
            Point<double> A = lw[lw.size() - 2];
            Point<double> B = lw[lw.size() - 1];
            Point<double> C = p[i];

            if((B-A).cross(C-A) < 0) lw.pop_back();
            else break;
        }
        lw.push_back(p[i]);
    }
    return lw;
}

vector<Point<double>> uper(vector<Point<double>> p){
    vector<Point<double>> up{p[p.size() - 1], p[p.size() - 2]};
    for(int i = (int)p.size() - 3; i >= 0; i--){
        while (up.size() >= 2u){    
            Point<double> A = up[up.size() - 2];
            Point<double> B = up[up.size() - 1];
            Point<double> C = p[i];

            if((B-A).cross(C-A) < 0) up.pop_back();
            else break;
        }
        up.push_back(p[i]);
    }
    return up;
}

vector<Point<double>> descasca(vector<Point<double>> pt, vector<Point<double>> poli){
    int pos = 0;
    vector<Point<double>> aux(0);
    for(int i = 0; i < (int)pt.size(); i++){
        if((pt[i].x != poli[pos].x) || (pt[i].y != poli[pos].y)){
            aux.push_back(pt[i]);
        }
        else pos++;
    }
    pt.clear();
    pt = aux;
    return pt;
}

int main(){

    int quantidade = 1;
    vector<Point<double>> vec(quantidade);
    vector<Point<double>> lw(1);
    vector<Point<double>> up(1);
    vector<Point<double>> aux(1);
    vector<Point<double>> poligono(1);

    cin >> quantidade;
    while (quantidade != 0)
    {
        int poligonos = 0;
        vec.clear();
        vec.resize(quantidade);
        for(int i = 0; i < quantidade; i++) cin >> vec[i].x >> vec[i].y;
        
        sort(vec.begin(), vec.end(), [](const Point<double>& a, const Point<double>& b) {
            if(a.x != b.x) return a.x < b.x;
            else return a.y < b.y;
        });
        vec = tira_repetido(vec);
        
        while(vec.size() > 3){
            lw = lower(vec);
            up = uper(vec);

            poligono.clear();
            poligono = lw;
            poligono.insert(poligono.end(), up.begin() + 1, up.begin() + up.size() - 1);

            sort(poligono.begin(), poligono.end(), [](const Point<double>& a, const Point<double>& b) {
                if(a.x != b.x) return a.x < b.x;
                else return a.y < b.y;
            });

            vec = descasca(vec, poligono);

            lw.clear();
            up.clear();
            poligonos++;
        }

        if(vec.size() == 3) poligonos++;
        if(poligonos % 2 == 0) cout << "Do not take this onion to the lab!" << endl;
        else cout << "Take this onion to the lab!" << endl;
        cin >> quantidade;
    }
    return 0;

}