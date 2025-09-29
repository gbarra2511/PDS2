#include <iostream>
#include <string> 
#include <sstream>
#include <vector>
using namespace std;

//g++ -std=c++11 -Wall main.cpp -o main
int main(){

    int n;
    string proibida;
    string message;
    string new_message;
    vector<string> Vector;
    vector<int> counter;

    //fazendo a entrada
    cin >> n;
    for(int i =0; i < n; i++){

        cin >> proibida;
        Vector.push_back(proibida);
        counter.push_back(0);

    }
    cin.ignore();
    getline(cin, message);
    //transformando a string mensagem em stream pra separar e comparar separadamente
    stringstream st(message);
    string palavra;
    
    while(st >> palavra){
        
        bool flag = false;

        for (size_t i = 0; i < Vector.size(); i++)
        {
            
            if(palavra == Vector[i]){
                flag = true;
                counter[i]++;
                break;
           }
        }
           if(flag == 1){
            int size = palavra.length();
            new_message += string(size, '*');
           } else {
            new_message += palavra;

           }
           new_message += ' ';
        }
    
        cout << new_message << endl;

        //size_t pois o vector.size retorna um unsigned int e nao funciona se comparar com int diretamente
       for (size_t i = 0; i < Vector.size(); i++)
       {
        
            cout << "Palavra " << Vector[i]  << " substituida" << counter[i] << " vez(es)." << endl;
        
       }
       return 0;
    } 







