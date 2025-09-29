#include <stdio.h>
#include <math.h>

int main(){
    int nota10, nota20, nota50, nota100, valor_total;
    printf("Digite valor: \n");
    scanf("%d", &valor_total);

    if (valor_total%10!=0){
        printf("Valor invalido");
        return 0;
    }

    nota100 = valor_total/100;
    
    if (nota100> 0){
    
        printf("%d nota(s) de 100\n", nota100);
        valor_total = valor_total - (nota100*100);
    } 

    nota50 = valor_total/50;

     if (nota50 > 0){
        printf("%d nota(s) de 50\n", nota50);
        valor_total = valor_total - (nota50*50);
    
    }
    nota20 = valor_total/20;
    if (nota20 >0){
        printf("%d nota(s) de 20\n", nota20);
        valor_total = valor_total - (nota20*20);
    }
    nota10 = valor_total/10;
    if (nota10 > 0){
        printf("%d nota(s) de 10\n", nota10);
    }
    return 0;
}