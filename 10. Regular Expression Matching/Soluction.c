#include <stdio.h>
#include <stdlib.h>

int regularExpressionMatching(char word[], char expression[]){

    for(int i = 0; expression[i] != ('*' && '.'); i++)
        
    return 0;
}

int main(){
    char word[5] = "aaa";
    char expression[5] = "a*";

    printf("As palavras sao: %s e %s.\n Logo as expressoes sao: ", word, expression);
    regularExpressionMatching(word, expression) ? printf("true") : printf("false");
    
    return 0;
}