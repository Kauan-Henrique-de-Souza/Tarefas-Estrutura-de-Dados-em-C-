#include <stdio.h>

//Questão2//

int main() {
    int num_434, i;
    
    printf("Números ímpares no intervalo:");
    
    printf("Digite um número positivo: ");
    scanf("%d", &num_434);
    
    if (num_434 < 1) {
        printf("Número inválido. Por favor, digite um número inteiro positivo (maior que 1).\n");
        return 0;
    }
    
    printf("Os números impares entre 1 e o número digitado (%d) são:\n", num_434);
    
    i = 1;
    while (i <= num_434) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    
    return 0;
}