#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_vetor(int v[], int n) {
    int i;
    for(i=0; i<n; i++){
        v[i] = rand() % (n*10);
    }
}

void ordenar_vetor(int v[], int n){
    int i, j, aux;
    for(i=1; i<n; i++) {
        for(j=0;j<n-i; j++){ 
            if(v[j]>v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void exibir_vetor(int v[], int n, char * mensagem) {
    int i;
    printf("\n%s\n", mensagem);
    for (i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
}

int main () {
    int *v;
    int n;
    v = (int *) malloc (n*sizeof(int));
    srand(time(0));
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    gerar_vetor(v, n);
    exibir_vetor(v, n, "Vetor nao ordenado");
    ordenar_vetor(v, n);
    exibir_vetor(v, n, "Vetor ordenado");
    return 0;
}
