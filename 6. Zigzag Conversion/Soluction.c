#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 10

char* ZigzagConversion(char array[], int numRows) {
    char **newArray = (char **)malloc(TAM_ARRAY * sizeof(char*));
    for (int i = 0; i < TAM_ARRAY; i++) {
        newArray[i] = (char *)malloc(numRows * sizeof(char));
    }

    int count = 0;
    for (int i = 0; count < TAM_ARRAY;) {
        // Preenchendo a coluna para baixo
        for (int j = 0; j < numRows && count < TAM_ARRAY; j++) {
            newArray[i][j] = array[count++];
        }
        // Preenchendo a coluna diagonal para cima
        for (int j = numRows - 2; j > 0 && count < TAM_ARRAY; j--) {
            i++;
            newArray[i][j] = array[count++];
        }
        i++;
    }

    for (int j = 0; j < numRows; j++) {
        for (int i = 0; i < TAM_ARRAY; i++) {
            if (newArray[i][j]) {
                printf("%c, ", newArray[i][j]);
            } else {
                printf(" , ");
            }
        }
        printf("\n");
    }

    char *newConverted = (char *)malloc((TAM_ARRAY + 1) * sizeof(char));
    count = 0;
    for (int j = 0; j < numRows; j++) {
        for (int i = 0; i < TAM_ARRAY; i++, count++) {
            if (newArray[i][j])
                newConverted[count] = newArray[i][j];
        }
    }
    newConverted[TAM_ARRAY] = '\0';

    for (int i = 0; i < TAM_ARRAY; i++)
        free(newArray[i]);
    free(newArray);

    return newConverted;
}

int main(){
    char array[TAM_ARRAY] = "PHDASD";
    int numRows = 3;
    char *arrayConverted;
    arrayConverted = ZigzagConversion(array, numRows);
    
    printf("[%s, %s]", array, arrayConverted);
    
    free(arrayConverted);
    return 0;
}