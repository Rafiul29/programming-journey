var minimizedStringLength = function(s) {
    let result=[];
    for(let i=0;i<s.length;i++){
      if(!result.includes(s[i])){
          result.push(s[i])
      }
    }
    return result.length
};

console.log(minimizedStringLength("cbbd"))