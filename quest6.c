#include <stdio.h>

int main() {
    // Declaração da variável
    float watts, quilowatts, cavalos_vapor;

    // Solicitar ao usuário o valor em Watts
    printf("Digite o valor em Watts: ");
    scanf("%f", &watts);

    // Conversão para Quilowatts e Cavalos-vapor
    quilowatts = watts / 1000;
    cavalos_vapor = watts / 735.5;

    // Exibir os resultados
    printf("%.2f Watts equivalem a %.2f Quilowatts e %.2f Cavalos-vapor.\n", watts, quilowatts, cavalos_vapor);

    return 0;
}
