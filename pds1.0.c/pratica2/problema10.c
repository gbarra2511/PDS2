#include <stdio.h>
#include <math.h>

int main (){
    int a;
    int b;
    int c;
    float raiz1, raiz2, delta;
    printf("Digite os coeficientes: \n");
    scanf("%d, %d, %d", &a, &b, &c);

    delta =(b*b- 4*a*c);

    raiz1 = ((-b+ sqrt(delta)) / (2*a));
    raiz2 = ((-b - sqrt(delta)) / (2*a));
    

    if(a==0){
        printf("Nao e uma equacao quadratica\n");
        return 0;
    }

    if (delta < 0){
        printf("Nao existe raiz real \n");
    }else if ( delta == 0){
        printf("Raiz unica\n");
        printf("Raiz: %.2f\n",(float)(-b) / (2*a));
    }else{
        raiz1 = ((-b+ sqrt(delta)) / (2*a));
        raiz2 = ((-b - sqrt(delta)) / (2*a));


        printf("Raiz 1: %.2f\n",raiz1);
        printf("Raiz 2: %.2f\n",raiz2);
    }
    return 0;
}