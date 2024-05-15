#include <stdio.h>
#include "invertido.h"

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    int *array_invertido = inverter_array(array, tamanho);

    if (array_invertido == NULL) {
        printf("Falha ao alocar memória para o array invertido.\n");
        return 1;
    }

    printf("Array original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array invertido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array_invertido[i]);
    }
    printf("\n");

    free(array_invertido); // Liberando a memória alocada para o array invertido

    return 0;
}