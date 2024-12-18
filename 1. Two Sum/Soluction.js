const buscarIndices = (array, target) => {
    const TAM_ARRAY = array.length;
    const indices = [0, 0];

    for (let i = 0; i < TAM_ARRAY - 1; i++) {
        for (let j = i + 1; j < TAM_ARRAY; j++) {
            if (array[i] + array[j] === target) {
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
        }
    }

    return indices;
};

// Exemplo de uso
const array = [-1, 2, 3, 4, 5, 6];
const target = parseInt(prompt("Insira um valor que você busca encontrar a soma: "), 10);
const indices = buscarIndices(array, target);

if (indices[0] === 0 && indices[1] === 0) {
    console.log("Não temos valores que resultam nessa soma");
} else {
    console.log(`[${indices[0]}, ${indices[1]}]`);
}
