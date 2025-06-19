var superPow = function(a, b) {
    if(b.length==0){
      return 1
    }
   const number=Number(b.sort((a,b)=>b-a).join(''))
   
   return Math.pow(a,number)
};

superPow(2, [3])