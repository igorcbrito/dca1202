/* Questão 11

  R: Os resultados obtidos na questão anterior são compatíveis com os resultados obtidos nesta questão, embora
  o número de bytes para cada tipo de dado apresente variações. */

#include <stdio.h>

int main()
{
    int x[4];
    char y[4];
    float w[4];
    double z[4];

    printf("Valores de int x: %x, %x, %x\nTamanho de um inteiro: %d bytes\n\n", x+1, x+2, x+3, sizeof (int));

    printf("Valores de char y: %x, %x, %x\nTamanho de um char: %d byte\n\n", y+1, y+2, y+3, sizeof (char));

    printf("Valores de float w: %x, %x, %x\nTamanho de um float: %d bytes\n\n", w+1, w+2, w+3, sizeof (float));

    printf("Valores de double z: %x, %x, %x\nTamanho de um double: %d bytes\n\n", z+1, z+2, z+3, sizeof (double));

    return 0;
}
