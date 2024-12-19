#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM_ARRAY 3

int gerarNumero(int *array){
    int soma = 0;
    int potenciaDeDez = 1;
    for (int i = 0; i < TAM_ARRAY; i++){
        soma = soma + array[i] * potenciaDeDez;
        potenciaDeDez *= 10;
    }            
    return soma;
}

int *gerarArray(int numero, int *array){
    int tam_array;
    if ((numero - 1000) >= 0)
        tam_array = 4;
    else
        tam_array = 3;
    array = (int *) malloc (tam_array * sizeof(int));

    int potenciaDeDez = 1000;
    int jaAchou = 0;
    for (int i = 3; i >= 0; i--){
        for(int j = 0; j <= 10; j++){
            if (j*potenciaDeDez > numero && jaAchou == 0){
                array[i] = j-1;
                jaAchou = 1;
                numero -= (j-1)*potenciaDeDez;
            }   
        }
        jaAchou = 0;
        potenciaDeDez /= 10;
    }

    return array;
}

int main(){
    int array1[TAM_ARRAY] = {1,2,3};
    int array2[TAM_ARRAY] = {4,5,6};

    int numArray1 = gerarNumero(array1);
    int numArray2 = gerarNumero(array2);
    int numArray3 = numArray1 + numArray2;

    int *array3;
    array3 = gerarArray(numArray3, array3);
    
    printf("[%d, %d, %d, %d]", array3[0], array3[1], array3[2], array3[3]);
    
    return 0;
}