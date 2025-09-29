#include <iostream>
#include <string>
#include <vector>


// 0) Crie uma função que receba três variveis inteiras como parâmetro, da seguinte forma:
//    - A primeira deve ser passada por referência 
//    - A segunda deve ser passada "por referência" usando apontadores (passgem "por referência" disponível em C)
//    - A terceira deve ser passada por valor
//   A função deverá incrementar em 1 o valor das 3 variáveis e retornar.
void function(int &param, int *param2, int param3){
    param++;
    (*param2)++;
    param3++;
  
}

using namespace std;

int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int x;
    cin >> x;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ptr = 0;
    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int tam;
    cin >> tam;
    vector<int> vec(tam);
    for (int i = 0; i < tam; i++)
    {
        cin >> vec[i];
    }
    
    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << &x << endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout << x << endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << &ptr << endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    cout<< ptr << endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << &vec << endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << &vec[0] << endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout << vec[0] << endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr = &x;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ptr = 5;

    // 15) Imprima o VALOR da variável declarada em (1)
    cout << x << endl;

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    *ptr = vec[0];

    // 17) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ptr = &vec[0];

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    bool n = (ptr == vec.data());
    if(n == 1){
        cout << 'S' << endl;
    }else {
        cout << 'N' << endl;
    }

    // 21) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
        for (size_t i = 0; i < vec.size(); i++)
    {
        *(ptr + i) *=10;
    }
    

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
        for (size_t i = 0; i < vec.size(); i++)
    {
        if (i == (vec.size() - 1)){
            cout << vec[i] << endl;
            break;
        }
        cout << vec[i] << " ";
        
    }



    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
      for (size_t i = 0; i < vec.size(); i++)
    {
        if (i == (vec.size() - 1)){
            cout << *(vec.data() + i) << endl;
            break;
        }
        cout << *(vec.data() + i) << " ";
    }


    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (2)
      for (size_t i = 0; i < vec.size(); i++)
    {
        if (i == (vec.size() - 1)){
            cout << ptr[i] << endl;
            break;
        }
        cout << ptr[i] << " ";
    }


    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    ptr = &vec[vec.size() - 1];

    // 28) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **pptr = &ptr;

    // 31) Imprima o VALOR da variável declarada em (30)
    cout << pptr << endl;

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout << &pptr << endl;

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout << *pptr << endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout << *(*pptr) << endl;

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int a, b, c;
    cin >> a >> b >> c;

    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.
    function(a,&b,c);
    
    // 37) Imprima o valor das 3 variáveis criadas em 35, uma por linha
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}