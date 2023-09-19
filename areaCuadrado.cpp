#include <stdio.h>

int main(int argc, char *argv[]) {
//MENU DE OPERACIONES 
int n1, area;
  printf("\nArea de cuadrado  ");
  printf("\nIntroduzca lado   (entero): ");
  scanf("%d", &n1);

  area = n1 * n1;
  printf("\nEl area de el cuadrado es: %d", area);
  printf("\nSe anexa linea para ver nueva version en programa");
  return 0;
}
