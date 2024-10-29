#include <stdio.h>     5

// Função recursiva para calcular o MCD usando o algoritmo de Euclides
int mcd(int a, int b) {
    if (b == 0) return a;
    return mcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &num1, &num2);
    printf("O MCD de %d e %d é: %d\n", num1, num2, mcd(num1, num2));
    return 0;
}