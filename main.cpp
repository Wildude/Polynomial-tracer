/*
* Polynomial tracing algorithm
* The algorithm uses both differential and integral calculus to find the polynomial relationship between two variables.
* (INCOMPLETE)
*/
#include <iostream>
#include "arrays.hpp"
#include "polynomial.hpp"
using namespace std;
int main(){
    float x = 0;
    float a[3] = {1, 2, 1};
    float dx = 1;
    const int size = 100;
    float *d1y_dx1 = new float [size];
    for(int i = 1; i <= 100 ;i++){
        float yo = polynomial<float>(x, a, 3);
        float y = polynomial<float>(x + dx, a, 3);
        d1y_dx1[i - 1] = slope<float>(x, yo, x + dx, y);
        x += dx;
    }
    int sizei = size - 1;
    float *d2y_dx2 = new float[sizei];
    for(int i = 1; i <= sizei; i++){
        d2y_dx2[i - 1] = slope<float>(0, d1y_dx1[i - 1], dx, d1y_dx1[i]);
    }
    int count = 1;
    while(!all_zeros<float>(d2y_dx2, sizei)){
        sizei--;
        float *diy_dxi = new float[sizei];
        for(int i = 1; i <= sizei; i++){
            diy_dxi[i - 1] = slope<float>(0, d2y_dx2[i - 1], dx, d2y_dx2[i]);
        }
        if(all_zeros<float>(diy_dxi, sizei)){
            // 
        }
        copy_array<float>(diy_dxi, &diy_dxi, sizei);
        display<float>(diy_dxi, sizei);
        count++;
    }
    cout << " polynomial has upto " << count << " derivatives\n";
    return 0;
}