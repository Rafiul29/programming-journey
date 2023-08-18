var thirdMax = function(nums) {
  let arr=[...new Set([...nums])]
  arr.sort((a,b)=>a-b)
  if(arr.length<3){
      return arr[arr.length-1]
  }
  return  arr[arr.length-3]
};
console.log(thirdMax([3,2,10,20,30]))