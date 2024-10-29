#include <stdio.h>            QUESTAO2
#include <stdlib.h>

// Função para criar o array com a progressão aritmética
void criarPA(int* array, int n, int inicial, int razao) {
    for (int i = 0; i < n; i++) {
        array[i] = inicial + i * razao;
    }
}

// Função para imprimir o array
void imprimirArray(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n, inicial, razao;

    // Leitura dos valores
    printf("Quantidade de elementos: ");
    scanf("%d", &n);
    printf("Valor inicial: ");
    scanf("%d", &inicial);
    printf("Razão: ");
    scanf("%d", &razao);

    // Alocação do array
    int* array = malloc(n * sizeof(int));

    // Criação e impressão do array
    criarPA(array, n, inicial, razao);
    imprimirArray(array, n);

    // Liberação da memória alocada
    free(array);

    return 0;
}