# Bubble Sort — Preços de Produtos

## Contexto do desafio
Tema cotidiano: preços de produtos de um supermercado. Dados simulados com 10 produtos e seus preços. Aplicação do método Bubble Sort em C para ordenar em ordem crescente e decrescente.

## Como funciona
- `main()` define os vetores e imprime os dados originais.
- `list_bubble_sort_ascending()` ordena crescente (troca se `precos[j] > precos[j+1]`).
- `list_bubble_sort_descending()` ordena decrescente (troca se `precos[j] < precos[j+1]`).
- `Algoritmo_organizacao_preco_produtos()` exibe os resultados formatados.

## Como compilar e rodar
```bash
gcc Algoritmo_organizacao_preco_produtos.c -o programa
./programa
```
