var isAcronym = function(words, s) {
  if(words.length!==s.length) return false
  let count =0;
  for(let i=0;i<words.length;i++){
   if(words[i].split("").at(0)===s[i]){
    count++
   }
  }  
console.log(count)
  return s.length===count
};
console.log(isAcronym(["never","gonna","give","up","on","you"],"ngguoy"))