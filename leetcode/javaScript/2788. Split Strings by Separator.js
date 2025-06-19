var splitWordsBySeparator = function(words, separator) {
  let result =[]
    for(let i=0;i<words.length;i++){
    let word=  words[i].split(`${separator}`)
    result.push(word)
    }
    
    let result1=  result.flat()
    return result1.filter((a,i)=>a!=="")
};

console.log(splitWordsBySeparator(["$easy$","$problem$"],
"$"))