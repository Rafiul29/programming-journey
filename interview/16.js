function upperSingleCharacter(str){
  const newstr=str.split(" ");
  let result="";
  for(let i=0;i<newstr.length;i++){
   
    let word=newstr[i].split("");
        word[0]=word[0].toUpperCase();
        result+=word.join("")+" "
      }
  return result;
}
console.log(upperSingleCharacter("i run there"));
