#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("O antecessor de %d é %d\n", valor, valor - 1);
    return 0;
}
