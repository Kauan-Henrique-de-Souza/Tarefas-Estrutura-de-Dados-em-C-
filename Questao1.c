#include <stdio.h>

//<-------Questão 1------>//

int main() {
    float valor_compra434, desconto434, total_a_pagar434;

    printf("Saiba seu Desconto!!!\n");
    printf("\nDigite o valor da compra: ");
    scanf("%f", &valor_compra434);

    if (valor_compra434 <= 5000) {
        desconto434 = valor_compra434 * 0.12;
    } else if (valor_compra434<= 8000) {
        desconto434 = valor_compra434 * 0.07;
    } else if (valor_compra434 <= 10000) {
        desconto434 = valor_compra434 * 0.04;
    } else {
        desconto434 = valor_compra434 * 0.03;
    }

    total_a_pagar434 = valor_compra434 - desconto434;

    printf("\nDesconto: R$ %.2f\n", desconto434);
    printf("\nTotal a pagar: R$ %.2f\n", total_a_pagar434);

    return 0;
}