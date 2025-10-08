#include <iostream>
#include <string>

#include "Parque.hpp"
#include "MontanhaRussa.hpp"
#include "Carrossel.hpp"
#include "RodaGigante.hpp"

using namespace std;
int main() {
    Parque parque;
    string comando;

    while(cin >> comando) {
        if(comando == "carregar") {
            int n;
            cin >> n;
            
            for(int i = 0; i < n; i++) {
                string tipo;
                cin >> tipo;
                
                if(tipo == "mr") {
                    string cod;
                    int ano, cap, loops;
                    double kw;
                    cin >> cod >> ano >> kw >> cap >> loops;
                    parque.adicionar(new MontanhaRussa(cod, ano, kw, cap, loops));
                }else if(tipo =="car"){
                    string cod;
                    int ano, cap, bichos;
                    double kw;
                    cin >> cod>>ano>>kw>>cap>>bichos;
                    parque.adicionar(new Carrossel(cod, ano, kw, cap, bichos));
                }else if(tipo =="rod"){
                    string cod;
                    int ano, cap, cabines;
                    double kw;
                    cin >> cod>>ano >>kw>>cap >> cabines;
                    //principio de Liskov
                    parque.adicionar(new RodaGigante(cod,ano,kw,cap,cabines));
                }
            }
        }else if(comando =="mr"){
            string cod;
            int ano, cap, loops;
            double kw;
            cin >> cod >> ano >> kw >> cap >> loops;
            parque.adicionar(new MontanhaRussa(cod, ano, kw, cap, loops));
        }else if(comando =="car"){
            string cod;
            int ano, cap, bichos;
            double kw;
            cin >> cod>>ano>>kw>>cap>>bichos;
            parque.adicionar(new Carrossel(cod, ano, kw, cap, bichos));
        }else if(comando =="rod"){
            string cod;
            int ano, cap, cabines;
            double kw;
            cin >> cod>>ano >>kw>>cap >> cabines;
            parque.adicionar(new RodaGigante(cod,ano,kw,cap,cabines));
        }else if(comando =="demanda"){
            int X;
            cin>>X;
            parque.definir_demanda(X);
        }else if (comando == "rodar") {
            int T;
            cin >> T;
            parque.rodar(T);
        }else if(comando=="pausar"){
            string cod;
            cin>>cod;
            parque.pausar(cod);
        }else if(comando=="retomar"){
            string cod;
            cin>>cod;
            parque.retomar(cod);

        }else if(comando =="status"){
            string cod;
            cin>>cod;
            parque.status(cod);

        }else if(comando =="painel"){
            parque.painel();
        }else if(comando =="encerrar"){
            //destrutor é chamado automaticamente
            break;
        }
    }
  return 0;
}  