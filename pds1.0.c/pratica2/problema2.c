#include <stdio.h>
#include <math.h>

int main(void){
 int vm, vr;
 
printf("Digite o valor da velocidade maxima: ");
scanf("%d", &vm);

printf("Digite o valor da velocidade registrada: ");
scanf("%d", &vr);

if (vr <=vm){
    printf("Sem infracao");
}else if (vr > vm && vr <= (vm*1.2)){
    printf("Infracao Media");
}else if (vr > (vm*1.2) && vr <= (vm*1.5)){
    printf("Infracao Grave");
}else if (vr > (vm*1.5)){
    printf("Infracao Gravissima");
}
return 0;
}