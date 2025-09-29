#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;

    printf("Digite os tres lados:");
    scanf("%d, %d, %d", &x, &y, &z);

    if (x>y+z || y>x+z || z > x+y){
        printf("\nNao e um triangulo\n");
    }else if ( x==y && x==z){
        printf("\nTriangulo Equilatero ");
    }else if((x == y) || (y==z) || (z ==x)){
        printf("\nTriangulo Isoceles ");
    }else{
        printf("\nTriangulo Escaleno");
    }
    return 0; 
}