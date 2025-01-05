#include <stdio.h>
#include <stdlib.h>

int palindromeNumber(int num){
    int normalNum = num;
    int reverseNum = 0;   
    int potenciaDez = 1;
    int tamNumero = 0;

    for (int i = 1; num-i >= 0; i=i*10)
        tamNumero = i;

    for (int i = tamNumero; i >= 1; i/=10){
        for(int j = 0; j <= 9; j++){
            if(num - j*i < 0){
                num = num - (j-1)*i;
                reverseNum = reverseNum + (j-1)*potenciaDez;
                potenciaDez*=10; j = 10;
            }
            if(num - j*i == 0){
                num = num - j*i;
                reverseNum = reverseNum + j*potenciaDez;
                potenciaDez*=10; j = 10;
            }
        }
    }

    printf("[%d, %d]", normalNum, reverseNum);

    if(normalNum/reverseNum == 1)
        return 1;

    return 0;
}

int main(){
    int num = 1221;
    printf("O numero %d, e palindromo: %d", num, palindromeNumber(num));
    return 0;
}