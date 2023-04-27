#include <stdio.h>

//Questão7//

int main() {
    int i, a234, b234;
    int lista234[12], par234[12], imp234[12];
    
    
    /* Inserir os numeros na lista principal */
    printf("Escreva 12 numeros inteiros\n");
    for(i = 0; i < 12; i++) {
        scanf("%d", &lista234[i]);
    }
    
    /* Separação dos pares e impares */
    for (i = 0; i< 12; i++) {
        if (lista234[i] % 2 == 0) {
            par234[a234] = lista234[i];
            a234++;
        } else {
            imp234[b234] = lista234[i];
            b234++;
        }
    }
    
    /* Mostra os numeros inseridos na lista original */
    printf("\nLista de numeros inseridos: ");
    for(i = 0; i < 12; i++) {
        printf("%d ", lista234[i]);
    }
    
    /* Mostra os numeros separados no console */
    printf("\nNumeros pares: ");
    for(i = 0; i < a234; i++) {
        printf("%d ", par234[i]);
    }
    
    printf("\nNumeros impares: ");
    for(i = 0; i < b234; i++) {
        printf("%d ", imp234[i]);
    }
    
    return 0;
}
