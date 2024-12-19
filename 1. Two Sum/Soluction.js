
const buscarIndices = () => {
    let indices = [];

    for (let i = 0; i < array.length - 1; i++) {
        for (let j = i + 1; j < array.length; j++) {
            if (array[i] + array[j] === target) {
                indices.push(i);
                indices.push(j);
                return indices;
            }
        }
    }

    return null;
};

const array = [-1, 2, 3, 4, 5, 6];
let target = 7;

const indices = buscarIndices();

if (indices == null) {
    console.log("Não temos valores que resultam nessa soma");
} else {
    console.log(`[${indices[0]}, ${indices[1]}]`);
}
