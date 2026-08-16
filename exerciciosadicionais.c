/* Exercicios adicionais do 1 ao 3*/

#include <stdio.h>

int main() {

    printf("Exercicio 1: \n");
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

    printf("Exercicio 4:\n");
    float altura, largura, area;
    printf("Digite a altura do terreno em metros: \n");
    scanf("%f", &altura);
    printf("Digite a largura do terreno em metros: \n");
    scanf("%f", &largura);
    area = altura * largura;
    printf("A área do terreno é de %.2f metros \n", area);

    printf("Exercicio 5:\n");
    float salmin, dolar, casaspos, valorcasa, orcamento;
    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &salmin);
    printf("Digite o valor do dólar hoje: \n");
    scanf("%f", &dolar);
    valorcasa = salmin * 150;
    orcamento = dolar * 10000000;
    casaspos = orcamento / valorcasa;
    printf("É possível construir %.1f casas \n", casaspos);

    printf("Exercicio 6:\n");
    int valor;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);

    if (valor % 5 == 0) 
    {
        printf("Esse número é múltiplo de 5 \n");
    }
    else
    {
        printf("Esse número não é múltiplo de 5 \n");
    }

    return 0;
}