
#include <stdio.h>

int main() {
    // MENU DE OPERACIONES 
    int n1;
    float areaCirculo;
    float pi = 3.1416;

    printf("\nArea de Circulo");
    printf("\nIntroduzca el radio (entero): ");
    scanf("%d", &n1);

    areaCirculo = pi * (n1 * n1);

    printf("\nEl area del círculo es: %5.2f", areaCirculo);
    return 0;
}