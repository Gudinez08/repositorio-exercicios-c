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
    printf ("Os salarios minimos recebidos são cerca de: %f \n", qtdsal);

    printf("Exercicio 2:\n");
    printf("Insira as horas:\n");
    int hora;
    scanf("%d", &hora);
    printf("Insira os minutos:\n");
    int minuto;
    scanf("%d", &minuto);
    int minutostotais;
    minutostotais = (hora * 60) + minuto;
    printf("Desde o início do dia, se passaram: %d minutos.\n", minutostotais);


    return 0;

}