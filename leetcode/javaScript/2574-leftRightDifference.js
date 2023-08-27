var leftRightDifference = function(nums) {
    let leftSum=0;
    let leftSumA=[]
      leftSumA.unshift(0)
    let rightSum=0;
    let rightSumA=[];
    rightSumA.push(0)
    let answer=[]

      for(let i=0;i<nums.length-1;i++){
          leftSum+=nums[i]
          leftSumA.push(leftSum)
      }

      for(let i=nums.length-1;i>=1;i--){
        rightSum+=nums[i]
        rightSumA.unshift(rightSum)
      }

      for(let i=0;i<leftSumA.length;i++){
        let sum=leftSumA[i]-rightSumA[i]
          answer.push(Math.abs(sum))
      }
      return answer
};


console.log(leftRightDifference([10,4,8,3]))