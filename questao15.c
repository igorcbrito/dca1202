// Questão 15

#include <stdio.h>
#include <stdlib.h>

int comparaCrescente(const void * a, const void * b){ //função de comparação
    if (*(int*)a == *(int*)b) // dentro da seleção converte do tipo de dado void* para int*
            return 0;// os dois valores são iguais, nada muda
    else
        if (*(int*)a < *(int*)b) // mesma coisa do 'if' anterior
            return -1; // se 'a' for menor que 'b', 'a' vem antes de 'b'
        else
            return 1; // se 'a' for maior que 'b', 'a' vem depois de 'b'

}

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
    qsort(p,n,sizeof (float),comparaCrescente);// chamada da função de ordenação qsort
    /* utilização como parametro o ponteiro om os valores da sequencia digitada, numero de elementos recebido na entrada, tamanho de cada elemento
     e função de comparação*/
    printf("Sequencia ordenada: ");

    for(i=0; i<n; i++){

        printf("%0.2f ", p[i]);
    }

    printf("\n");


    free(p);
    return 0;
}

