#include <stdio.h>
#include <stdlib.h>

void crescente(float* vetor, int n);

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
    crescente(p,n);

    printf("Sequencia ordenada: ");

    for(i=0; i<n; i++){

        printf("%0.2f ", p[i]);
    }

    printf("\n");




    return 0;
}

void crescente(float* vetor, int n){

    int i, j;
    float aux;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(vetor[i]>vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
