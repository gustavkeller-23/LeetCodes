#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_ARRAY 20

int longestSubstring(char array[]){
    int sizeLongest = 0;
    int index[2] = {0,0};
    int indexTemp=0;

    for (int i = 1; i < TAM_ARRAY-1 &&  array[i] != '\0'; i++){
        for (int j = indexTemp; j < i; j++){
            if(array[j] == array[i] || array[i+1] == '\0'){
                if (i-indexTemp >= sizeLongest){
                    index[0] = indexTemp;
                    index[1] = i-1;
                    sizeLongest = i-index[0];
                }
                indexTemp = j+1;
            }         
        }
    }

    if (index[0] == 0 && index[1] == 0)
        return strlen(array);
    
    return index[1]-index[0]+1;
}

int main(){
    char string[TAM_ARRAY] = "pwewke";
    int sizeSubstring;

    sizeSubstring = longestSubstring(string);
    
    printf("[%d]", sizeSubstring);

    return 0;
}