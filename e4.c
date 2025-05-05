#include <stdio.h>

int main() {
    int total, brancos, nulos, validos;
    printf("Digite o número total de eleitores: ");
    scanf("%d", &total);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &brancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &validos);

    printf("Brancos: %.2f%%\n", (brancos * 100.0) / total);
    printf("Nulos: %.2f%%\n", (nulos * 100.0) / total);
    printf("Válidos: %.2f%%\n", (validos * 100.0) / total);

    return 0;
}
