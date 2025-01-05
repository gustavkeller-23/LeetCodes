function reverseInteger(num){
    let reverseNum = 0;
    let potenciaDez = 1;
    let tamNumero = 0;

    for (let i = 1; num-i >= 0; i=i*10)
        tamNumero = i;

    for (let i = tamNumero; i >= 1; i/=10){
        for(let j = 0; j <= 9; j++){
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

    return reverseNum;
};

let num = 9120;
let reverseNum = reverseInteger(num);

console.log(`[${num}, ${reverseNum}]`);
