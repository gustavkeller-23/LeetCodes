
function longestSubstring(oldString){
    let newString = "";        
    for (let i = 0; i < oldString.length; i++){
        if(!newString.includes(oldString[i]))
            newString = newString.concat(oldString[i]);
    }     
    return newString;
};

const stringLongest = "abcbcbd";
const stringReduce = longestSubstring(stringLongest);
    
console.log(stringReduce);
    