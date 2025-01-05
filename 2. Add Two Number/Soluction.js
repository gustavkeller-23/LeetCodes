
const invertedArray = (array) => {
    arrayTemp = [];
    for(let i = array.length-1; i >=0; i--)
        arrayTemp.push(array[i]);
    return arrayTemp;
}

function gerarArray(num){
    let newArray = [];
    let numConvertedToString = num.toString();
    for(let i = numConvertedToString.length-1; i >=0; i--)
        newArray.push(Number(numConvertedToString[i]));
    return newArray;
};


const array1 = [6, 2, 3, 5, 4];
const array2 = [3, 7, 6];

const invertedArray1 = invertedArray(array1);
const invertedArray2 = invertedArray(array2);

const numArray1 = invertedArray1.reduce((accumulator, currentValue) => accumulator*10 + currentValue, 0,);
const numArray2 = invertedArray2.reduce((accumulator, currentValue) => accumulator*10 + currentValue, 0,);
const numArray3 = numArray1 + numArray2;

const array3 = gerarArray(numArray3);
const invertedArray3 = invertedArray(array3);

console.log(invertedArray3);
