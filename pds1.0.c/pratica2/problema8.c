#include <stdio.h>
#include <math.h>

int main(){
    double salario, ir, inss, fgts, salario_bruto, salario_liquido, ir2;
    int horas;
    printf("Digite o valor da hora de trabalho:\n");
    scanf("%lf", &salario);
    printf("Digite a quantidade de horas trabalhadas no mes:\n");
    scanf("%d", &horas);

    salario_bruto = salario*horas;
    inss = 0.1*salario_bruto;
    fgts = 0.11*salario_bruto;
    if (salario_bruto <= 900.0){
        ir = 0.0;
    }else if(salario_bruto > 900.0 && salario_bruto <=1500.0){
        ir = 0.05;
    }else if( salario_bruto> 1500.0 && salario_bruto <= 2500.0){
        ir = 0.10;
    }else if (salario_bruto > 2500.0){
        ir = 0.2;
    }
    ir2 = ir*salario_bruto; 
    salario_liquido = salario_bruto - (inss + ir2);
    printf("Salario bruto: R$ %.2lf\n", salario_bruto);
    printf("IR: R$ %.2lf\n", ir2);
    printf("INSS: R$ %.2lf\n", inss);
    printf("FGTS: R$ %.2lf\n", fgts);
    printf("Total de descontos: R$ %.2lf\n", (ir2+inss));
    printf("Salario liquido: R$ %.2lf\n", salario_liquido);

    return 0;
}