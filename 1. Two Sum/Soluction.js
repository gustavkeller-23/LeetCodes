
const buscarIndices = () => {
    let hash = [];

    for (let i = 0; i < array.length - 1; i++) {
        let y = target - array[i];
        
        if(y in hash)
            return [hash[y], i];

        hash[array[i]] = i;  
    }
    return null;
};

const array = [-1, 2, 3, 4, 5, 6];
let target = 7;

const indices = buscarIndices();

(indices == null) ? console.log("Não temos valores que resultam nessa soma") : console.log(`[${indices}]`);
