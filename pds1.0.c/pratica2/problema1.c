#include <stdio.h>
#include <math.h>

int main(){

    int n1, n2, n3, n4, n5;
    printf("Digite 5 numeros:");

    scanf("%d, %d, %d, %d, %d", &n1, &n2, &n3, &n4, &n5);
    
    //Maior 
    if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5){
        printf("Maior: %d ", n1);
        }else if (n2 >= n3 && n2 >= n4 && n2 >= n5){
        printf("Maior: %d ", n2);
        }else if (n3 >= n4 && n3 >= n5){
        printf("Maior: %d ", n3);
        }else if (n4 >= n5 ){
        printf("Maior: %d ", n4);
        }else{
        printf("Maior: %d ", n5);
        }
    //menor
    if (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5){
        printf("\nMenor: %d ", n1);
        }else if (n2 <= n3 && n2 <= n4 && n2 <= n5){
        printf("\nMenor: %d ", n2);
        }else if (n3 <= n4 && n3 <= n5){
        printf("\nMenor: %d ", n3);
        }else if (n4 <= n5 ){
        printf("\nMenor: %d ", n4);
        }else{
        printf("\nMenor: %d ", n5);
        }
    int div = 0;
    
    if (n1%3 == 0){
        div++;
    }
    if (n2%3 == 0){
        div++;
    }
    if (n3%3 == 0){
        div++;
    }
    if (n4%3 == 0){
        div++;
    }
    if (n5%3 == 0){
        div++;
    }
    printf("\nQuantidade de divisiveis por 3: %d", div);
    return 0;
}