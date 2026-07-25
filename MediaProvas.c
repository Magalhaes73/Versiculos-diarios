#include <stdio.h>

int main(){
    float nota1, media, soma;

    int count=0;   
    while (count<22)
    {
        printf("Insira sua nota: ");
        scanf("%f", &nota1);
        soma = soma + nota1;
        count++;
        
    }
    media = soma/count;
    printf("\n===================\n\n     Media: %.1f\n\n===================\n", media);
    return 0;
}