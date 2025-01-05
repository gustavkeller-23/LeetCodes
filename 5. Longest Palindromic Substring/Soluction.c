#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 10

char *longestPalindromicSubstring(char array[]){
    char *newArray = (char *) malloc (sizeof(char));
    int tamNewArray = 0;
    int index[2] = {0,0};

    for (int i = 0; i < TAM_ARRAY-1; i++){
        for (int j = i+1; j < TAM_ARRAY-1; j++){
            if (array[i] == array[j]){
                int tamNewArrayTemp = 0;
                for (int k = 0; k < j-i; k++){
                    if(array[i+k] == array[j-k]){
                        tamNewArrayTemp = k;

                    }else{
                        tamNewArrayTemp = 0;
                        k = j-i+1;
                    }
                    
                    if (k == j-i-1 && tamNewArray < j-i+1){
                        index[0] = i;
                        index[1] = j;
                        tamNewArray = j-i+1;
                    }
                }
            }
        }
    }

    newArray = (char *) realloc (newArray, index[1]-index[0]+1 * sizeof(char));
    for (int i = index[0], j = 0; j <= index[1]; i++,j++)
        newArray[j] = array[i];
    newArray[index[1]-index[0]+1] = '\0';
          
    return newArray;
}

int main(){
    char array[TAM_ARRAY] = "souluo";
    char *arrayReduce;
    arrayReduce = longestPalindromicSubstring(array);
    
    printf("[%s, %s]", array, arrayReduce);
    
    free(arrayReduce);
    return 0;
}