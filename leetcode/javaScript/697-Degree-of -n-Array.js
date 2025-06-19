// Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

var findShortestSubArray = function(nums) {
  if(nums.length==1){
    return 1
  }
  if(nums.length==2){
    return 2
  }

    let result=[];
    let maxNumber=Math.max(...nums)

    for(let i=0;i<maxNumber;i++){
      result[i]=0
    }

    for(let i=0;i<nums.length;i++){
      result[nums[i]]++

    }
    let max=result[0]
    let index=0
    for(let i=1;i<result.length;i++){
    
      if(max<result[i]){
        max=result[i]
        index=i
      }
    }
    return max*index
};

console.log(findShortestSubArray([1,2]))