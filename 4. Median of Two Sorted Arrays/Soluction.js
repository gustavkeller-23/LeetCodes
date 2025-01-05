function medianOfTwoArrays(array1, array2){
    const newArray = [];

    for(let i = 0, j = 0; i < array1.length || j < array2.length;){
        console.log(`valor de i ${i}\nvalor de j ${j}`);
        if(array1[i] < array2[j]){
            newArray.push(array1[i]);
            i++;
        } else {
            newArray.push(array2[j]);
            j++;
        }
    }

    let median = 0;

    if (newArray.length % 2 == 0){
        indexMedian = newArray.length / 2;
        median = newArray[indexMedian-1] + newArray[indexMedian];
        median = median/2;
    } else {
        median = newArray[newArray.length / 2];
    }

    return median;
};


const array1 = [-1, 2, 3, 4, 5, 6];
const array2 = [1, 2, 5];
const mediana = medianOfTwoArrays(array1, array2);

console.log(`A mediana dessa array é ${mediana}`);

