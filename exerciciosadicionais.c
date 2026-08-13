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

    printf("Exercicio 3:\n");
    printf("Insira a nota 1:\n");
    float nota1;
    scanf("%f", &nota1);
    printf("Insira a nota 2:\n");
    float nota2;
    scanf("%f", &nota2);
    printf("Insira a nota 3:\n");
    float nota3;
    scanf("%f", &nota3);
    float media;
    media = (nota1 + nota2 + nota3) / 3;
    printf ("A média foi %f de nota \n", media);

    return 0;

}