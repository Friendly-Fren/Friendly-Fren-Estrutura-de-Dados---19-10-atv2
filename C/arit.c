#include <stdio.h>

int main() {
    float num1, num2, soma, sub, mult, div;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", sub);
    printf("Multiplicação: %.2f\n", mult);
    printf("Divisão: %.2f\n", div);

    return 0;
}
