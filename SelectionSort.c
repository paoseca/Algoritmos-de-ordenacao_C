#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_vetor (int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

void selection (int v[], int n) {
    int i, j, menor, aux;
    for(i=0; i< n-1; i++) {
        menor = i;
        for(j = i+1; j< n; j++) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        if (i != menor) {
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}

void exibir_vetor (int v[], int n, char * mensagem) {
    int i;
    printf("\n%s\n", mensagem);
    for(i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

int main () {
    int *v;
    int n;

    srand(time(0)); // srand = seed rand
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    v = (int *) malloc (n*sizeof(int));
    gerar_vetor(v, n);
    exibir_vetor(v, n, "Vetor nao ordenado:");
    selection(v, n);
    exibir_vetor(v, n, "Vetor ordenado:");

    return 0;
}
