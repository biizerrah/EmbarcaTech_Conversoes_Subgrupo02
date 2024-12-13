#include <stdio.h>

int main() {
    // Declaração da variável
    float metros_por_segundo, km_por_segundo, mph;

    // Solicitar ao usuário o valor em metros por segundo
    printf("Digite a velocidade em metros por segundo: ");
    scanf("%f", &metros_por_segundo);

    // Conversão para quilômetros por segundo e milhas por hora
    km_por_segundo = metros_por_segundo / 1000;
    mph = metros_por_segundo * 2.23694;

    // Exibir os resultados
    printf("%.2f metros por segundo equivalem a %.6f km/s e %.2f mph.\n", metros_por_segundo, km_por_segundo, mph);

    return 0;
}
