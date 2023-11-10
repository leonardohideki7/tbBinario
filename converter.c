#include "converter.h"

int calcularBinario(int binario[], int tam) {

int valor = 0;
int potencia = 1;

for(int i = 0; i < tam; i++) {
        printf("Digite o valor binário (0 e 1):");
        scanf("%d", &binario[i]);
    }
for(int i = tam -1 ; i>=0; i = i - 1) {
        valor = valor + binario[i] * potencia;
        potencia = potencia * 2;
    }
    return valor;
}
