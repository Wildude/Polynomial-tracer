/*
* Polynomial tracing algorithm
* The algorithm uses both differential and integral calculus to find the polynomial relationship between two variables.
* (INCOMPLETE)
*/
#include <iostream>
#include <vector>
#include "arrays.hpp"
#include "polynomial.hpp"
using namespace std;
int main(){
    float x = 0;
    float a[4] = {1, 3, 2, 1};
    float dx = 1;
    const int size = 100;
    vector<float*>Diy_Dxi;
    Diy_Dxi.push_back(new float[size]);
    displayPolynomial<float>(a, 4);
    for(int i = 1; i <= size ;i++){
        float yo = polynomial<float>(x, a, 4);
        float y = polynomial<float>(x + dx, a, 4);
        Diy_Dxi.at(0)[i - 1] = yo;
        x += dx;
    }
    int i = 0;
    while(!all_zeros<float>(Diy_Dxi.at(i), size - i)){
        cout << " i = " << i << endl;
        Diy_Dxi.push_back(new float[size - (i + 1)]);
        for(int j = 1; j < size - (i + 1); j++){
            Diy_Dxi.at(i + 1)[j - 1] = slope<float>(0, Diy_Dxi.at(i)[j - 1], dx, Diy_Dxi.at(i)[j]);
        }
        i++;
    }
    cout << " vector size = " << Diy_Dxi.size() << endl;
    for(int i = 0; i < Diy_Dxi.size(); i++){
        cout << " ==================================\n";
        cout << " i: " << i << endl;
        for(int j = 0; j < size - i; j++)
        cout << " " << j + 1 << ". " << Diy_Dxi.at(i)[j] << endl;
    }
    return 0;
}