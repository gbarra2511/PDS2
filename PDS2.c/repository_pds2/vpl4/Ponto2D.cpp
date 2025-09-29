#include <iostream>
#include <cmath>
#include "Ponto2D.hpp"

Ponto2D ::Ponto2D  (double x, double y) : x(x), y(y){

}

double Ponto2D :: calcular_distancia(Ponto2D* ponto){
        
    double dist_x = this->x - ponto->x;
    double dist_y = this->y - ponto->y;

    double dist_euclid = sqrt(dist_x* dist_x + dist_y*dist_y);
    return dist_euclid;

}

