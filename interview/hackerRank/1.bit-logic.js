
function maxXor(lo, hi, k) {
  // Write your code here
  let answer=[];

  for(let i=lo; i<=hi; i++){
    for(let j=lo+1; j<=hi; j++){
    if(i===j || i>j){
      continue;
    }else{
      let xor=i^j;
      if(xor<=k){
        answer.push(xor)
      }
    }
    }
  }
 let res=answer.sort((a,b)=>{
  return a-b
 })
 return res[res.length-1]
}

console.log(maxXor(1,3,3))