#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = (2 * n1 + 3 * n2 + 5 * n3) / 10;
    printf("A média final é: %.2f\n", media);
    return 0;
}
