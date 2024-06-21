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
template <class T>
void displayPolynomial(T* a, int size){
    cout << " p(x) = ";
    for(int i = size - 1; i >= 0; i--){
        cout << a[i];
        if(i)cout << "x^" << i << " + ";
        else cout << endl;
    }
}