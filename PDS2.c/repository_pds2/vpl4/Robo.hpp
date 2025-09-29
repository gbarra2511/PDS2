#include "Ponto2D.hpp"
struct Robo {


    int _id;
    Ponto2D pos;
    double _energia = 100.0;
    bool _com_bola;
   //construtor
    Robo(int id, Ponto2D pos_inicial, bool com_bola);

    void mover(double v, double th, double t);
    double calcular_distancia(Robo* outro_robo);
    Robo* determinar_robo_mais_proximo(Robo** naves, int n);
    void passar_bola(Robo** time, int n);
    void imprimir_status();
};


