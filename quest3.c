#include <stdio.h>

int main() {
    // Declaração da variável
    float litros, mililitros, metros_cubicos;

    // Solicitar ao usuário o valor em litros
    printf("Digite o valor em litros: ");
    scanf("%f", &litros);

    // Conversão para mililitros e metros cúbicos
    mililitros = litros * 1000;
    metros_cubicos = litros / 1000;

    // Exibir os resultados
    printf("%.2f litros equivalem a %.2f mililitros e %.6f metros cúbicos.\n", litros, mililitros, metros_cubicos);

    return 0;
}
