
function gerarNumero(array){
    let soma = 0;
    while(array.length > 0)
        soma += (Math.pow(10, array.length-1))*array.pop();
    return soma;
};

function gerarArray(num){
    let arrayTemp = [];
    let numConvertedToString = num.toString();
    let count = numConvertedToString.length-1;
    while(count >= 0){
        arrayTemp.push(Number(numConvertedToString[count]))
        count--;
    }
    return arrayTemp;
};


const array1 = [1, 2, 3];
const array2 = [4, 5, 6];

const numArray1 = gerarNumero(array1);
const numArray2 = gerarNumero(array2);
const numArray3 = numArray1 + numArray2;

const array3 = gerarArray(numArray3);
console.log(array3);
