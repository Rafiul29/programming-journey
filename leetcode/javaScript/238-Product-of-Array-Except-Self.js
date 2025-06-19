var productExceptSelf = function(nums) {
    let anwswer=[];
    for(let i=0;i<nums.length;i++){
      let mul=1;
      for(let j=0;j<nums.length;j++){
        if(i!==j){
        mul*=nums[j]
        }
      }
   anwswer.push(Math.abs(mul))
    }
    return anwswer
};

 console.log(productExceptSelf( [-1,1,0,-3,3]))




