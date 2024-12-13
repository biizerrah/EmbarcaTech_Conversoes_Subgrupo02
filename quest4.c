#include <stdio.h>

int main() {
    // Declaração da variável
    float celsius, kelvin, fahrenheit;

    // Solicitar ao usuário o valor em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Conversão para Kelvin e Fahrenheit
    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 9/5) + 32;

    // Exibir os resultados
    printf("%.2f graus Celsius equivalem a %.2f Kelvin e %.2f Fahrenheit.\n", celsius, kelvin, fahrenheit);

    return 0;
}