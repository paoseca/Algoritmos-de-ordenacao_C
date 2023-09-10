#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_vetor (int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

void insertion (int v[], int n) {
    int i, j, aux;
    for(i = 1; i < n; i++) {
        aux = v[i];
        for(j = i; (j > 0) && (aux < v[j-1]); j--) { 
            v[j] = v[j-1];
        }
        v[j] = aux;
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
    int n;
    int *v;

    srand(time(0)); // srand = seed rand
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    v = (int *) malloc (n*sizeof(int));
    gerar_vetor(v, n);
    exibir_vetor(v, n, "Vetor nao ordenado:");
    insertion(v, n);
    exibir_vetor(v, n, "Vetor ordenado:");

    return 0;
}
