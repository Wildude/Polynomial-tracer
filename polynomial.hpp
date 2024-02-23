// Polynomial header
#include <cmath>
template <class T>
T polynomial(T x, T *a, int size){
    T y = 0;
    for(int i = 0; i < size; i++){
        y += a[i] * pow(x, i);
    }
    return y;
}
template <class T>
float slope(T xo, T yo, T x, T y){
    return (float)(y - yo) / (float)(x - xo);
}