#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "converter.h"
#define MAX 10000

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam;
    puts("Digite o tamanho da base binária:");
    scanf("%d", &tam);

    int binario[tam];

    int baseDecimal = calcularBinario(binario, tam);

    printf("O resultado em valor decimal é: %d", baseDecimal);




}
