#include <stdio.h>

int main() {
    // Declaração da variável
    float metros, centimetros, milimetros;

    // Solicitar ao usuário o valor em metros
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    // Conversão para centímetros e milímetros
    centimetros = metros * 100;
    milimetros = metros * 1000;

    // Exibir os resultados
    printf("%.2f metros equivalem a %.2f centimetros e %.2f milimetros.\n", metros, centimetros, milimetros);

    return 0;
}
