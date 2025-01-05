#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 6
 
int *buscarIndices(int array[], int target, int *indice){
    for (int i = 0; i < TAM_ARRAY-1; i++){
        for (int j = i+1; j < TAM_ARRAY; j++){
            if (array[i] + array[j] == target){
                indice[0] = i;
                indice[1] = j;
                return indice;
            }   
        }
    }

    indice[0] = 0; indice[1] = 0;                
    return indice;
}

int main(){
    int array[TAM_ARRAY] = {-1,2,3,4,5,6};
    int target;
    int *indice = (int *) malloc (2 * sizeof(int));

    printf("Insira um valor que vc busca encontrar a soma: ");
    scanf("%d", &target);

    indice = buscarIndices(array, target, indice);
    
    if (indice[0] == 0 && indice[1] == 0)
        printf("Nao temos valores que resultam nessa soma");
    else
        printf("[%d, %d]", indice[0], indice[1]);
    
    free(indice);

    return 0;
}