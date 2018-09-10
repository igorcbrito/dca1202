// Questão 18

#include <stdio.h>

int soma(int *p1, int *p2, int *p3, int x);

int main()
{
    int *v1, *v2, *v3, n, i;

    printf("Digite o numero de elementos dos vetores: ");
    scanf("%d", &n);

    v1 = (int*)malloc(n*sizeof (int));
    v2 = (int*)malloc(n*sizeof (int));
    v3 = (int*)malloc(n*sizeof (int));

    printf("\nPreencha o primeiro vetor: ");
    for(i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }

    printf("\nPreencha o segundo vetor: ");
    for(i = 0; i < n; i++){
        scanf("%d", &v2[i]);
    }

    printf("\n\nSoma dos dois vetores: ");

    soma(v1,v2,v3,n);

    for(i = 0; i < n; i++){
        printf(" %d ", v3[i]);
    }
   printf("\n\n");
}

int soma(int *v1, int *v2, int *v3, int n){
   int i;

   for(i = 0; i < n; i++){
       v3[i] = v1[i] + v2[i];
   }
}
