import java.util.Scanner;

public class Soluction {

    public static class Resultado {
        
    }

    public static Resultado buscarIndices(int[] array, int target) {
        
    }

    public static void main(String[] args) {
        
    }
}

// #define TAM_ARRAY 6

// char *longestSubstring(char array[]){
//     char *newArray = (char *) malloc (TAM_ARRAY * sizeof(char));
//     int positionNewArray = 0;
//     int ahLetra = 0;

//     for (int i = 0; i < TAM_ARRAY-1; i++){
//         for (int j = 0; j < positionNewArray; j++){
//             if(array[i] == newArray[j])
//                 ahLetra = 1;
//         }
//         if (!ahLetra){
//             newArray[positionNewArray] = array[i];
//             positionNewArray++;
//         }
//         ahLetra = 0;
//     }
//     newArray[positionNewArray] = '\0';
          
//     return newArray;
// }

// int main(){
//     char array[TAM_ARRAY] = "abbb";
//     char *arrayReduce;

//     arrayReduce = longestSubstring(array);
    
//     printf("[%s, %s]", array, arrayReduce);
    
//     free(arrayReduce);

//     return 0;
// }