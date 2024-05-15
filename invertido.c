#include "invertido.h"
#include <stdlib.h>

int* inverter_array(int *array, int tamanho) {
    int *array_invertido = (int*)malloc(tamanho * sizeof(int)); // Alocando memória para o novo array invertido

    if (array_invertido == NULL) { // Verificando se a alocação de memória foi bem-sucedida
        return NULL; // Retorna NULL se a alocação falhar
    }

    // Invertendo o array
    for (int i = 0; i < tamanho; i++) {
        array_invertido[i] = array[tamanho - 1 - i];
    }

    return array_invertido;
}