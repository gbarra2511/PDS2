#include <stdio.h>
#include <math.h>
int main (void){
    int dia, mes, ano;
    printf("Digite a data: ");

    scanf("%d/%d/%d",&dia, &mes, &ano);

    if ( dia <=28 && mes <=12 ){
        printf("Data valida");
    }else if ( dia >= 28 && (mes == 1|| mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ) && dia <= 31){
        printf("Data valida");
    }else if ( (ano%4==0 && ano%100!=0 && dia <=29) || (ano%400== 0 && dia <=29)){
        printf("Data valida");
    }else if( dia <= 30 && ( mes == 4 || mes == 6 || mes == 9 || mes ==11)){
        printf("Data valida");
    
    }else{
        printf("Data invalida");
    }
    return 0;
}