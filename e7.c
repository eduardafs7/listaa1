#include <stdio.h>

int main() {
    int carrosVendidos;
    float totalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &totalVendas);
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (carrosVendidos * valorPorCarro) + (0.05 * totalVendas);
    printf("O salário final do vendedor é: R$ %.2f\n", salarioFinal);
    return 0;
}
