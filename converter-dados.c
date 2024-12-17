#include <stdio.h>
#include <math.h>

char *strings[]={ "bytes", "KB", "MB", "GB", "TB"};

int main()
{
    float valor;
    int option;

    printf("Informe o valor que deseja converter:\n");
    scanf("%f", &valor);
    printf("Informe a unidade de medida do valor:\n");
    printf("(1 - bytes | 2 - KB | 3 - MB | 4 - GB | 5 - TB)\n");
    scanf("%i", &option);

    option--;

    printf("#################\nTabela de conversao:\n#################\n");
    int i=0;
    while(strings[i]) {
        if (i > option) printf("%0.5f %s\n", valor / pow(1024, i-option), strings[i]);
        else if (i < option) printf("%.0lf %s\n", valor * pow(1024, option-i), strings[i]);
        else printf("%.1f %s\n", valor, strings[i]);
        i++;
    };

    return 0;
}