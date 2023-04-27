#include <stdio.h>

//Questão 8//

int main() {
    int a_424, b_424, c_424;
    int *pa_424, *pb_424, *pc_424;

    pa_424 = &a_424;
    pb_424 = &b_424;
    pc_424 = &c_424;

    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", pa_424, pb_424, pc_424);

    printf("\nNúmeros digitados: %d, %d, %d\n", a_424, b_424, c_424);
    printf("Endereços de memória: %p, %p, %p\n", (void *)pa_424, (void *)pb_424, (void *)pc_424);

    // Ordenando os valores usando ponteiros
    int *pmax424, *pmin424, *pmed424;
    pmax424 = pa_424;
    pmin424 = pa_424;
    pmed424 = pa_424;

    if (*pb_424 > *pmax424) pmax424 = pb_424;
    if (*pc_424 > *pmax424) pmax424 = pc_424;

    if (*pb_424 < *pmin424) pmin424 = pb_424;
    if (*pc_424 < *pmin424) pmin424 = pc_424;

    if (*pa_424 != *pmax424 && *pa_424 != *pmin424) pmed424 = pa_424;
    else if (*pb_424 != *pmax424 && *pb_424 != *pmin424) pmed424 = pb_424;
    else pmed424 = pc_424;

    printf("\nNúmeros em ordem crescente: %d, %d, %d\n", *pmin424, *pmed424, *pmax424);

    return 0;
}
