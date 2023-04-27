#include <stdio.h>

//Questão 3//

int main() {
    int notas_234[10];
    int i, somar_234 = 0;
    float media_234;
    int nmaior_234, nmenor_234;
    
    printf("Relatório das notas dos alunos\n\n");
    
    for(i = 0; i < 10; i++) {
        printf("Informe a nota do %dº aluno: ", i+1);
        scanf("%d", &notas_234[i]);
        while(notas_234[i] < 1 || notas_234[i] > 10) {
            printf("Nota inválida. Informe novamente: ");
            scanf("%d", &notas_234[i]);
        }
        somar_234 += notas_234[i];
    }
    
    media_234 = somar_234 / 10.0;
    nmaior_234 = notas_234[0];
    nmenor_234 = notas_234[0];
    
    for(i = 1; i < 10; i++) {
        if(notas_234[i] > nmaior_234) {
            nmaior_234 = notas_234[i];
        }
        if(notas_234[i] < nmenor_234) {
            nmenor_234 = notas_234[i];
        }
    }
    
    printf("Soma das notas: %d\n\n", somar_234);
    printf("Média das notas: %.1f\n\n", media_234);
    printf("Maior nota: %d\n\n", nmaior_234);
    printf("Menor nota: %d\n\n", nmenor_234);
    
    return 0;
}