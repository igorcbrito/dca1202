/* Questão 17

  R: Com base no programa executado abaixo, a diferença de tempo de execução na função qsort foi significativamente
  menor, comprovando a eficiencia do referido método. Na última execução realizada, foi obtida uma diferença de tempo de 0,0035s

  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void crescente(float* vetor, int n);
int comparaCrescente(const void * a, const void * b);

int main()
{
    int n=999, i;
    float *p, *vet;
    clock_t t;

    p = (float*)malloc(n*sizeof(float));
    vet = (float*)malloc(n*sizeof(float));

    srand(time(0));
    for(i=0; i < n; i++){

        p[i]=rand()%100;
        vet[i]=p[i];
    }

    printf("Comparando o tempo de ordenacao entre as funcoes utilizadas nas questoes anteriores\n\nOrdenando metodo 1...\n\n");
    t = clock();
    crescente(p,n);
    t = clock() - t;


    printf("\nTempo decorrido para ordenar pelo método 1: %f\n", (((float)t)/CLOCKS_PER_SEC));

    printf("\n\nOrdenando por qsort...\n\n");
    t = clock();
    qsort(vet,n,sizeof (float),comparaCrescente);
    t = clock() - t;

    printf("\nTempo decorrido para ordenar pelo método 1: %f\n", (((float)t)/CLOCKS_PER_SEC));

    free(p);
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

int comparaCrescente(const void * a, const void * b){
    if (*(int*)a == *(int*)b)
            return 0;
    else
        if (*(int*)a < *(int*)b)
            return -1;
        else
            return 1;

}
