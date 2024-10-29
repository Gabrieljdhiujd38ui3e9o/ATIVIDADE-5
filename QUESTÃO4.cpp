#include <stdio.h>           QUESTAO4

// Função recursiva para busca binária
int buscaBinaria(int array[], int inicio, int fim, int valor) {
    if (inicio > fim) return -1;
    int meio = inicio + (fim - inicio) / 2;
    if (array[meio] == valor) return meio;
    if (array[meio] > valor) return buscaBinaria(array, inicio, meio - 1, valor);
    return buscaBinaria(array, meio + 1, fim, valor);
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(array) / sizeof(array[0]);
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(array, 0, n - 1, valor);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}