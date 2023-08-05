#include <stdio.h>

int main(int argc, char **argv)
{
  float nota1;
  float nota2;
  float media;

  printf("Insira nota 1: \n");
  scanf_s("%f", &nota1);

  printf("Insira nota 2: \n");
  scanf_s("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("media = %.1f", media);
  return 0;
}
