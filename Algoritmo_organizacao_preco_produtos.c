#include <stdio.h>
#include <stdlib.h>

/* Exibe produtos com preços formatados (dados originais ou ordenados) */
int Algoritmo_organizacao_preco_produtos(int n, char *produtos[], float *precos){
    int i;
    for(i = 0; i < n; i++){ // percorre cada produto
        printf("%s - R$ %.2f\n", produtos[i], precos[i]); // imprime nome e preço
    }
    return 0;
}

/* Ordena preços e nomes de forma crescente usando Bubble Sort */
int list_bubble_sort_ascending(int n, char *produtos[], float *precos){
    int i, j;
    float aux;
    char *aux2;
    for(i = 0; i < n; i++){ // loop externo: quantidade de passagens
        for(j = 0; j < n - 1; j++){ // loop interno: compara pares adjacentes
            if(precos[j] > precos[j + 1]){ // compara preço atual com o próximo
                aux = precos[j]; // guarda preço atual
                precos[j] = precos[j + 1]; // troca preços
                precos[j + 1] = aux;
                aux2 = produtos[j]; // guarda nome atual
                produtos[j] = produtos[j + 1]; // troca nomes para manter relação
                produtos[j + 1] = aux2;
            }
        }
    }

    Algoritmo_organizacao_preco_produtos(n, produtos, precos); // exibe ordenado
    return 0;
}

/* Ordena preços e nomes de forma decrescente usando Bubble Sort */
int list_bubble_sort_descending(int n, char *produtos[], float *precos){
        int i, j;
    float aux;
    char *aux2;
    for(i = 0; i < n; i++){ // passagens pela lista
        for(j = 0; j < n - 1; j++){ // compara adjacentes
            if(precos[j] < precos[j + 1]){ // se atual é menor que próximo, troca (decrescente)
                aux = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = aux;
                aux2 = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = aux2;
            }
        }
    }

    Algoritmo_organizacao_preco_produtos(n, produtos, precos); // exibe ordenado
    return 0;
}

int main(){
    char *produtos[10] = {"Arroz", "Feijao", "Macarrao", "Leite", "Ovos", "Queijo", "Farinha", "Oleo", "Pao", "Manteiga"};
    float precos[100] = {5.99, 6.99, 4.99, 3.99, 7.99, 8.99, 5.99, 6.99, 4.99, 3.99};
    int n = sizeof(produtos) / sizeof(produtos[0]);
    
    printf("Produtos e Precos:\n");
    Algoritmo_organizacao_preco_produtos(n, produtos, precos); // exibe dados originais
    printf("=====================================================\n");
    printf("\n");
    printf("Produtos em ordem crescente:\n");
    list_bubble_sort_ascending(n, produtos, precos); // crescente
    printf("=====================================================\n");
    printf("\n");
    printf("Produtos em ordem decrescente:\n");
    list_bubble_sort_descending(10, produtos, precos); // decrescente
    return 0;
}
