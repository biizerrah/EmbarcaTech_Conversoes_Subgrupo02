#include <stdio.h>

int main () {
    double metro, centimetro, milimetro, medida;
    int opcao;
    printf("Qual unidade de medida quer converter? \n 1 - Metro \n 2 - Centimetro \n 3 - Milimetro \n"); 
    scanf("%i", &opcao);

    switch (opcao) {
        case 1: 
            printf("Qual o valor dessa medida? \n"); 
            scanf("%lf", &medida);
            centimetro = medida * 100;
            milimetro = medida * 1000;
            printf("%.4lf metros equivale a %.4lf centimetros e %.4lf milimetros\n", medida, centimetro, milimetro);
            break; 

        case 2: 
            printf("Qual o valor dessa medida? \n"); 
            scanf("%lf", &medida);
            metro = medida / 100;
            milimetro = medida * 10;
            printf("%.4lf centimetros equivale a %.4lf metros e %.4lf milimetros\n", medida, metro, milimetro);
            break; 

        case 3: 
            printf("Qual o valor dessa medida? \n"); 
            scanf("%lf", &medida);
            metro = medida / 1000;
            centimetro = medida / 10;
            printf("%.4lf milimetros equivale a %.4lf metros e %.4lf centimetros\n", medida, metro, centimetro);
            break; 

        default: 
            printf("Opção inválida.\n");
            break;
    }
    return 0;
}
