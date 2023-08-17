var detectCapitalUse = function(word) {
  if(word.toLowerCase() ==word || word.toUpperCase()==word){
    return true
  }else if((word[0] + word.slice(1).toLowerCase()) == word){
    console.log(word[0] + word.slice(1).toLowerCase())
    return true
  }else{
    return false
  }
};

console.log(detectCapitalUse("FlaG"))