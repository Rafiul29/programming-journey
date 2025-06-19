var selfDividingNumbers = function(left, right) {
 let result=[]
    for(let i=left;i<=right;i++){
        let numbers=String(i).split("")
          let count=0;
        for(let j=0;j<numbers.length;j++){
          if(i%Number(numbers[j])===0){
            count++
          }
        }
       if(count===numbers.length){
        result.push(i)
       }
    }
    return result
};
console.log(selfDividingNumbers(47,85))