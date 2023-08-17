
function paliandrom(str){
const newStr=str.split("");
let removespace=[]
for(let i=0;i<newStr.length;i++){
    if(newStr[i]===" "){
      continue;
    }else{
      removespace.push(newStr[i])
    }
    }

 let reverseStr=removespace.reverse().join("")
    let srt1=removespace.join("")
 return srt1===reverseStr
}
console.log(paliandrom("eye"))
