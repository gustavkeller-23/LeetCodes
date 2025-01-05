function longestPalindromicSubstring(word){
    let tamNewArray = 0;
    let index = [0,0];
    let newWord = "";
    
    for (let i = 0; i < word.length-1; i++){
        for (let j = i+1; j < word.length-1; j++){
            if (word[i] == word[j]){
                let tamNewArrayTemp = 0;
                for (let k = 0; k < j-i; k++){
                    if(word[i+k] == word[j-k]){
                        tamNewArrayTemp = k;
                    }else{
                        tamNewArrayTemp = 0;
                        k = j-i+1;
                    }
                    
                    if (k == j-i-1 && tamNewArray < j-i+1){
                        index[0] = i;
                        index[1] = j;
                        tamNewArray = j-i+1;
                    }
                }
            }
        }
    }
    
    for (let i = index[0], j = 0; j <= index[1]; i++,j++)
        newWord = newWord.concat(word[j]);

    return newWord;
};

const word = "asacds";
const wordPalindromic = longestPalindromicSubstring(word);

console.log(`[${word}, ${wordPalindromic}]`);
