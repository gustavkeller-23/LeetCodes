#include <stdio.h>
#include <stdlib.h>

#define TAM_TEXT 10

int stringToInteger(char textNum[]){
    int num = 0;
    int ehNegativo = 0;

    for (int i = 0; i < TAM_TEXT; i++){
        switch (textNum[i]){
            case ' ':
                break;
            case '0':
                num = num*10 + 0;
                break;
            case '1':
                num = num*10 + 1;
                break;
            case '2':
                num = num*10 + 2;
                break;
            case '3':
                num = num*10 + 3;
                break;
            case '4':
                num = num*10 + 4;
                break;
            case '5':
                num = num*10 + 5;
                break;
            case '6':
                num = num*10 + 6;
                break;
            case '7':
                num = num*10 + 7;
                break;
            case '8':
                num = num*10 + 8;
                break;
            case '9':
                num = num*10 + 9;
                break;
            case '-':
                ehNegativo = 1;
                break;
            default:
                i = TAM_TEXT;
                break;
        }
    }
    
    if (ehNegativo)
        num *= -1;
    

    return num;
}

int main(){
    char textNum[TAM_TEXT] = " -135c600";
    int Num = stringToInteger(textNum);
        
    printf("[%s, %d]", textNum, Num);
    
    return 0;
}