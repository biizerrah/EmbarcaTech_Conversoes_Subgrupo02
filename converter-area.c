#include <stdio.h>

void Menu() {
    printf("\n---Conversor de Unidades de Área---\n");
    printf("\nEscolha uma das opções abaixo:\n");
    printf("\n1. Converter de m² para cm²\n");
    printf("2. Converter de cm² para m²\n");
    printf("0. Sair\n");
    printf("Digite sua opção: ");
}

void converterMetroParaCentimetro(double area) {
    double resultado = area * 10000.0;
    printf("%.4f m² equivale a %.4f cm²\n", area, resultado);
}

void converterCentimetroParaMetro(double area) {
    double resultado = area / 10000.0;
    printf("%.4f cm² equivale a %.4f m²\n", area, resultado);
}

int main() {
    int opcao;
    double area;

    do {
        Menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a área em m²: ");
                scanf("%lf", &area);
                converterMetroParaCentimetro(area);
                break;

            case 2:
                printf("Digite a área em cm²: ");
                scanf("%lf", &area);
                converterCentimetroParaMetro(area);
                break;

            case 0:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
      
    } while (opcao != 0);

    return 0;
}
