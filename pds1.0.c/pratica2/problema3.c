#include <stdio.h>
#include <math.h>

int main(){
    int idade, tempo;
    char sexo;
    printf("Digite o sexo:");
    scanf("%c", &sexo);

    printf("Digite a idade:");
    scanf("%d", &idade);

    printf("Digite o tempo de contribuicao:");
    scanf("%d", &tempo);

    if ((idade >= 60 && tempo >= 35 && sexo == 'M') || (idade >= 55 && tempo >=30 && sexo == 'F')){
        printf("Pode aposentar");
    }else if ((idade >= 65 && sexo == 'M') || (idade >= 60 && sexo == 'F')) {
        printf("Pode aposentar");
    } else{
        printf("Nao pode aposentar");
    }
    
    return 0;
}