#include <stdio.h>

int main() {
    double valor, resultado;
    int unidadeOrigem, unidadeDestino;

    printf("=== Conversor de Unidades de Tempo ===\n");

    // Escolha da unidade de origem
    printf("Escolha a unidade de origem:\n");
    printf("1. Horas\n");
    printf("2. Minutos\n");
    printf("3. Segundos\n");
    printf("Escolha a unidade de origem (1, 2 ou 3): ");
    if (scanf("%d", &unidadeOrigem) != 1 || unidadeOrigem < 1 || unidadeOrigem > 3) {
        printf("Opção de origem inválida! Certifique-se de escolher 1, 2 ou 3.\n");
        return 1;
    }

    // Entrada do valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada de valor inválida! Certifique-se de digitar um número.\n");
        return 1;
    }

    // Escolha da unidade de destino
    printf("Escolha a unidade de destino:\n");
    printf("1. Horas\n");
    printf("2. Minutos\n");
    printf("3. Segundos\n");
    printf("Escolha a unidade de destino (1, 2 ou 3): ");
    if (scanf("%d", &unidadeDestino) != 1 || unidadeDestino < 1 || unidadeDestino > 3) {
        printf("Opção de destino inválida! Certifique-se de escolher 1, 2 ou 3.\n");
        return 1;
    }

    // Conversão de unidade de origem para unidade de destino
    if (unidadeOrigem == 1) { // Horas
        if (unidadeDestino == 1) {
            resultado = valor; // Horas para Horas (mesma unidade)
        } else if (unidadeDestino == 2) {
            resultado = valor * 60; // Horas para Minutos
        } else if (unidadeDestino == 3) {
            resultado = valor * 3600; // Horas para Segundos
        }
    } 
    else if (unidadeOrigem == 2) { // Minutos
        if (unidadeDestino == 1) {
            resultado = valor / 60; // Minutos para Horas
        } else if (unidadeDestino == 2) {
            resultado = valor; // Minutos para Minutos (mesma unidade)
        } else if (unidadeDestino == 3) {
            resultado = valor * 60; // Minutos para Segundos
        }
    } 
    else if (unidadeOrigem == 3) { // Segundos
        if (unidadeDestino == 1) {
            resultado = valor / 3600; // Segundos para Horas
        } else if (unidadeDestino == 2) {
            resultado = valor / 60; // Segundos para Minutos
        } else if (unidadeDestino == 3) {
            resultado = valor; // Segundos para Segundos (mesma unidade)
        }
    }

    // Exibição do resultado final
    printf("\nResultado: %.2lf\n", resultado);

    return 0;
}

