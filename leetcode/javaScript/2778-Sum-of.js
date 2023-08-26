var sumOfSquares = function(nums) {
  let sqSum=0
  for(let i=0;i<=nums.length;i++){
    for(let j=i;j<=nums.length;j++){
      if(nums[i]%nums[j]===0){
          sqSum+=(nums[i]*nums[i])
      }
  }
  }
  return sqSum
};
console.log(sumOfSquares([1,2,3,4]))