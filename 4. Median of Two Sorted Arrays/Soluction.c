#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARRAY1 3
#define SIZE_ARRAY2 5

float medianOfTwoArrays(int array1[], int array2[]){
    int *newArray = (int *) malloc (SIZE_ARRAY1+SIZE_ARRAY2 * sizeof(int));
    
    for (int i = 0, j = 0; i+j < SIZE_ARRAY1+SIZE_ARRAY2;){
        if (array1[i] < array2[j]){
            newArray[i+j] = array1[i];
            i++;
        } else{
            newArray[i+j] = array2[j];
            j++;
        }
    }

    for (int i = 0; i < 8; i++){
        printf("%d, ", newArray[i]);
    }
    
    
    int indexMedian;
    float median;
    if ((SIZE_ARRAY1+SIZE_ARRAY2)%2 == 0){
        indexMedian = (SIZE_ARRAY1+SIZE_ARRAY2)/2;
        median = newArray[indexMedian-1] + newArray[indexMedian];
        median = median/2;
    } else {
        indexMedian = ((SIZE_ARRAY1+SIZE_ARRAY2)/2) - 1;
        median = newArray[indexMedian];
    }

    return median;
}

int main(){
    int array1[SIZE_ARRAY1] = {1,3,8};
    int array2[SIZE_ARRAY2] = {2,3,5,6,7};

    float mediana = medianOfTwoArrays(array1, array2);

    printf("%.2f", mediana);

    return 0;
}