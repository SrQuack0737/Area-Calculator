#include <stdio.h>

int main(int argc, char *argv[]) {
//MENU DE OPERACIONES 
int n1, n2, areaTriangulo;
  printf("\nArea de Triangulo  ");
  printf("\nIntroduzca base   (entero): ");
  scanf("%d", &n1);
  printf("\nIntroduzca altura   (entero): ");
  scanf("%d", &n2);

  areaTriangulo= (n1 * n2) /2;
  printf("\nEl area de el cuadrado es: %d", areaTriangulo);
  return 0;
}
