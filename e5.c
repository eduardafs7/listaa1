#include <stdio.h>

int main() {
    float salario, percentual, novoSalario;
    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);
    novoSalario = salario + (salario * percentual / 100);
    printf("O novo salário é: R$ %.2f\n", novoSalario);
    return 0;
}
