#include <stdio.h>

//Questão 6//

void calcularMaiorMenor(float notas_234[], int tamanho_234, float *maior_234, float *menor_234) {
    int i;

    *maior_234 = notas_234[0];
    *menor_234 = notas_234[0];

    for (i = 1; i < tamanho_234; i++) {
        if (notas_234[i] > *maior_234) {
            *maior_234 = notas_234[i];
        }
        if (notas_234[i] < *menor_234) {
            *menor_234 = notas_234[i];
        }
    }
}

int main() {
    float notas_234[4];
    float maior_234, menor_234;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas_234[i]);
    }

    calcularMaiorMenor(notas_234, 4, &maior_234, &menor_234);

    printf("A maior nota é: %.2f\n", maior_234);
    printf("A menor nota é: %.2f\n", menor_234);

    return 0;
}