// Questão 16

#include <stdio.h>
#include <stdlib.h>

int comparaCrescente(const void * a, const void * b); // protótipo da função de comparação

int main()
{
    int n, i;
    float *p;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    printf("\n\n");

    p = (float*)malloc(n*sizeof(float));

    for(i=0; i < n; i++){

        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%f", &p[i]);
        printf("\n");

    }

    printf("Sequencia digitada: ");

    for(i=0; i < n; i++){

        printf("%.2f ",p[i]);

    }

    printf("\n\nOrdenando...\n\n");

    qsort(p,n,sizeof (float),comparaCrescente);

    printf("Sequencia ordenada: ");

    for(i=0; i<n; i++){

        printf("%0.2f ", p[i]);
    }

    printf("\n");


    free(p);
    return 0;
}

int comparaCrescente(const void * a, const void * b){ //função de comparação
    if (*(int*)a == *(int*)b)
            return 0;
    else
        if ((*(int*)a - *(int*)b) < 0)
            return -1; // se 'a' - 'b' for menor que 0, 'a' é menor que 'b' e deve vir antes de 'b'
        else
            return 1; // se 'a' - 'b' for maior que 0, 'a' é maior que 'b' e deve vir depois de 'b'

}
