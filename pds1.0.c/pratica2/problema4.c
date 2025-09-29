#include <stdio.h>
#include <math.h>

int main(){
    float salario, aumento, novo_salario;
    printf("DIgite o valor do salario:");
    scanf("%f", &salario);
    
    
    (salario <= 280.0) ? novo_salario = (salario*1.20) : 0;
    (280.0 < salario && salario <=700.0) ? novo_salario = (salario*1.15) : 0;
    (700.0 < salario && salario <= 1500.0) ? novo_salario = (salario*1.10) : 0;
    (salario >= 1500.0) ? novo_salario = (salario*1.05) : 0;
    aumento = (novo_salario - salario);

    printf("Valor do aumento: %.2f", aumento);
    printf("Novo salario: %.2f", novo_salario);
    return 0;

}