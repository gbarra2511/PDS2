#include <iostream>
#include "Robo.hpp"
#include <cmath>
#include <cfloat>

    //construtor que ta só comentado 
   Robo :: Robo(int id , Ponto2D ponto, bool possui_bola){
        this->_id = id;
        this->pos = ponto;
        this->_energia = 100.0;
        this->_com_bola = possui_bola;
   }

   //método 
   void Robo:: mover(double v, double th, double t){
    // decomposicao vetorial
    double vx = v* cos(th);
    double vy = v* sin(th);
    //distancias nos eixos
    double sx = vx*t;
    double sy = vy*t;
    double dist_total = v*t;
    this->pos.x += sx;
    this->pos.y += sy;
    this->_energia -= dist_total;
   };

    double Robo::calcular_distancia(Robo* robo){
        double distancia = this->pos.calcular_distancia(&(robo->pos));
        return distancia;




   }
   Robo* Robo:: determinar_robo_mais_proximo(Robo** naves, int n){
        Robo* robo_proximo = nullptr;

        double menor_distancia = DBL_MAX;
        
        for (int i = 0; i < n; i++)
        {
            Robo *robo_cand = naves[i];
            if(robo_cand == this){
                continue;
            }
            double distancia_robo = this->calcular_distancia(robo_cand);

            if(distancia_robo < menor_distancia){
                menor_distancia = distancia_robo;
                robo_proximo = robo_cand;
            }
        }
        
        return robo_proximo;

   }
    void Robo ::passar_bola(Robo** time, int n){
        
        if (this->_com_bola == true) {
        
            Robo* recebedor = this->determinar_robo_mais_proximo(time, n);
            this->_com_bola = false;
            recebedor->_com_bola = true;
        
        }else{
            std:: cout << "Estou sem a bola!" << std:: endl;
        }
    }
    
        


    void Robo:: imprimir_status(){
        std:: cout << this->_id << "\t"
          << this->pos.x << "\t"
          << this->pos.y << "\t"
          << this->_com_bola << "\t"
          << this->_energia << std:: endl;

   }





