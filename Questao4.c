#include <stdio.h>

//Questão 4//

int dobrar(int num_234) {
    return num_234 * 2;
}

int somar(int num1_234, int num2_234) {
    return num1_234 + num2_234;
}

int triplicar(int num_234) {
    return num_234 * 3;
}

int main() {
    int num1_234, num2_234, soma_234, resultado_234;

    printf("Digite o primeiro número:");
    scanf("%d", &num1_234);

    printf("\nDigite o segundo número:");
    scanf("%d", &num2_234);

    soma_234 = somar(num1_234, num2_234);
    resultado_234 = triplicar(somar(dobrar(num1_234), dobrar(num2_234)));
    
    printf("\nSoma dos números digitados: %d\n\n", soma_234);
    printf("\nResultado -----> (Números somados e triplicados): %d\n", resultado_234);

    return 0;
}