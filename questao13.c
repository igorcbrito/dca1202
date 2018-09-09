/* Questão 13

  R: Uma função é um conjunto de instruções armazenadas na memória, é possível acessar essas intruções por meio
  de ponteiros (ponteiros para funções).

  */

#include <stdio.h>

int potencia(int a, int n){

    int i = 0, c = 1;

    while (i < n){
        c = c*a;
        i++;
    }
    return c;
}

int main()
{
    int (*p)(int, int), x, y;

    p = potencia;

    printf("Digite a base: ");
    scanf("%d", &x);
    printf("\n");
    printf("Digite o expoente: ");
    scanf("%d", &y);
    printf("\n\n");

    printf("x^y = %d\n", p(x,y));

    return 0;
}
