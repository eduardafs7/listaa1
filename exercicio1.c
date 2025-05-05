#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    // 28% do distribuidor + 45% de impostos = 73% sobre o custo de fábrica
    custoFinal = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

    printf("O custo final ao consumidor é: R$ %.2f\n", custoFinal);

    return 0;
}
