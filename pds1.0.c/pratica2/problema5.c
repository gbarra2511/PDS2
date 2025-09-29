#include <stdio.h>
#include <math.h>

int main (){
    float custo_i, custo_f, distribuidor, imposto;
    printf("Digite o custo de fabrica:\n ");
    scanf("%f", &custo_i);

    if (custo_i <= 12000.00){
        distribuidor = 0.05;
        imposto = 0.00;
    }else if (custo_i > 12000.00 && custo_i <=25000.00){
        distribuidor = 0.10;
        imposto = 0.15;
    }else{
        distribuidor = 0.15;
        imposto = 0.20;
    }
    custo_f = custo_i + (custo_i*imposto) + (custo_i*distribuidor);
    printf("Custo total: %.2f", custo_f);
    return 0;
}