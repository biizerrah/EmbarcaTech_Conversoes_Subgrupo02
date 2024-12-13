#include <stdio.h>

int main() {
    // Declaração da variável
    float toneladas, quilogramas, gramas;

    // Solicitar ao usuário o valor em toneladas
    printf("Digite o valor em toneladas: ");
    scanf("%f", &toneladas);

    // Conversão para quilogramas e gramas
    quilogramas = toneladas * 1000;
    gramas = toneladas * 1000000;

    // Exibir os resultados
    printf("%.2f toneladas equivalem a %.2f quilogramas e %.2f gramas.\n", toneladas, quilogramas, gramas);

    return 0;
}