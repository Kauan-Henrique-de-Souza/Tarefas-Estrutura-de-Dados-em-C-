#include <stdio.h>

//Questão5//

void maior_menor_idade424() {
    int idade1424, idade2424, idade3424;

    printf("Maior e menor idade!");

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1424);

    printf("\nDigite a idade da segunda pessoa: ");
    scanf("%d", &idade2424);

    printf("\nDigite a idade da terceira pessoa: ");
    scanf("%d", &idade3424);

    int maior424 = idade1424;
    int menor424 = idade1424;

    if (idade2424 > maior424) maior424 = idade2424;
    if (idade3424 > maior424) maior424 = idade3424;

    if (idade2424 < menor424) menor424 = idade2424;
    if (idade3424 < menor424) menor424 = idade3424;

    printf("\nMaior idade: %d\n", maior424);
    printf("\nMenor idade: %d\n", menor424);
}

int main() {
    maior_menor_idade424();
    return 0;
}