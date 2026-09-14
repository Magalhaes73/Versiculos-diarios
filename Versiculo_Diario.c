#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int i=0, k;
char vers[100][500], ref[100][200];
char resposta;

void repeticao() {
    k = rand() % i;
    printf("Versiculo do dia:\n%s\n%s\n", vers[k], ref[k]);
    printf("\nGostaria de outro versiculo? (Y/N): ");
    scanf(" %c", &resposta);
}

int main() {
    FILE *arquivo;
    arquivo = fopen("Versiculos.txt", "r");
    if (arquivo == NULL) printf("Arquivo Vazio ou Inexistente");
    else {
        //Exemplo de como vai estar no arquivo: (A mulher virtuosa é a coroa do seu marido; porém a que procede vergonhosamente é como apodrecimento nos seus ossos) - Pv 12:4
        while (i<100 && fscanf(arquivo, " (%499[^)]) %199[^\n]", vers[i], ref[i]) == 2) i++;
        fclose(arquivo);

        SetConsoleOutputCP(CP_UTF8); //juntamente com a biblioteca #include <windows.h>, esse comando permite acentos
        srand(time(NULL));
        if(i==0) printf("Arquivo Vazio ou Inexistente");
        else {
            printf("\nGostaria de um versiculo? (Y/N): ");
            scanf(" %c", &resposta);
            while (resposta == 'Y' || resposta == 'y') repeticao();
        }
        return 0;
    }
}