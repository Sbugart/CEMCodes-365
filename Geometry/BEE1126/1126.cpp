#include <iostream>
using namespace std;

template <typename T> struct Point{
    T x, y, z;
    Point() : x(), y(), z() {}
    Point(T x, T y, T z): x(x), y(y), z(z) {}

    template<typename Tp> Point(Point<Tp> p): x(p.x), y(p.y), z(p.z) {} 

    template<typename Tp> Point<T> operator- (Point<Tp> const& p) const {return Point<T>(x - p.x, y - p.y, z - p.z);}
    template<typename Tp> inline T Cross(Point<Tp> const& p) const {return Point<T>(y*p.z - p.y * z, z * p.x - x * p.z, x * p.y - y * p.x);}                       
    //Retorna o *vetor* do produto vetorial
};



int main(){



    return 0;
}