#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 4

typedef struct lista{
    int value;
    struct lista *next;
}lista;

lista *adicionarNumero(lista *lst, int val);
lista *adicionarNumeroInvertido(lista *lst, int val);
int gerarNumero(lista *lst);
lista *gerarLista(lista *lst, int numero);
void imprimirLista(lista *lst);
int tamanhoNumero(int numero);
int potencia(int base, int potencia); //pow is failed!

lista *adicionarNumero(lista *lst, int val){
    lista *p, *ant = NULL;
    lista *new = (lista *) malloc (sizeof(lista));
    new->value = val;

    if(lst == NULL){
        lst = new;
        new->next = NULL;
    }

    for (p = lst; p->next != NULL;){p = p->next;}
    p->next = new;
    new->next = NULL;
    return lst;
}

lista *adicionarNumeroInvertido(lista *lst, int val){
    lista *p, *ant = NULL;
    lista *new = (lista *) malloc (sizeof(lista));
    
    new->value = val;
    new->next = lst;
    lst = new;
    return lst;
}

int gerarNumero(lista *lst){
    int soma = 0;
    int potenciaDeDez = 1;
    for (lista *p = lst; p != NULL; p = p->next, potenciaDeDez *= 10)
        soma += p->value * potenciaDeDez;
    return soma;
}

lista *gerarLista(lista *lst, int numero){
    int tamNumero = tamanhoNumero(numero);
    int potenciaDeDez = potencia(10, tamNumero-1);

    printf("Ptencia de dez: %d\n", potenciaDeDez);
    printf("tam_array: %d\n", tamNumero);
    printf("Numero: %d\n", numero);
    
    int jaAchou = 0;
    for (int i = tamNumero; i >= 0; i--){
        for(int j = 0; j <= 10 && jaAchou == 0; j++){
            if (j*potenciaDeDez > numero){
                lst = adicionarNumeroInvertido(lst, j-1);
                jaAchou = 1;
                numero -= (j-1)*potenciaDeDez;
            }   
        }
        jaAchou = 0;
        potenciaDeDez /= 10;
    }

    return lst;
}

int potencia(int base, int potencia){
    int num = 1;
    for(int i = 0; i < potencia; i++)
        num *= base;
    return num;
}

void imprimirLista(lista *lst){
    lista *p;
    printf("[");
    for (p = lst; p->next != NULL; p=p->next)
        printf("%d,", p->value);
    printf("%d]", p->value);
}

int tamanhoNumero(int numero){
    int tam_array = 0;
    while (numero > 1){
        tam_array++;
        numero /= 10;
    }
    return tam_array;
}

int main(){
    lista *Lista1 = NULL;
    lista *Lista2 = NULL;

    Lista1 = adicionarNumero(Lista1, 1);
    Lista1 = adicionarNumero(Lista1, 2);
    Lista1 = adicionarNumero(Lista1, 3);
    Lista1 = adicionarNumero(Lista1, 4);
    Lista1 = adicionarNumero(Lista1, 5);

    Lista2 = adicionarNumero(Lista2, 4);
    Lista2 = adicionarNumero(Lista2, 5);
    Lista2 = adicionarNumero(Lista2, 6);

    int numLista1 = gerarNumero(Lista1);
    int numLista2 = gerarNumero(Lista2);
    int numLista3 = numLista1 + numLista2;

    lista *Lista3 = NULL;
    Lista3 = gerarLista(Lista3, numLista3);
    
    imprimirLista(Lista1);
    imprimirLista(Lista2);
    imprimirLista(Lista3);
    
    return 0;
}