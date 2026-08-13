/* Exercicios adicionais do 1 ao 3*/

#include <stdio.h>

int main() {

    printf("Exercicio 1:");
    printf("Digite o valor do salário mínimo:\n");
    float salariomin;
    scanf("%f", &salariomin);
    printf("Digite o valor do salário bruto:\n");
    float salariobruto;
    scanf("%f", &salariobruto);
    float qtdsal;
    qtdsal = salariobruto / salariomin;
    printf ("Os salarios minimos recebidos são cerca de: %f", qtdsal);
    return 0;

}