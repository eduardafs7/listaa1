#include <stdio.h>

int main() {
    int anos, meses, dias, total;
    printf("Digite a idade em anos, meses e dias:\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);
    total = anos * 365 + meses * 30 + dias;
    printf("A idade em dias é: %d\n", total);
    return 0;
}
