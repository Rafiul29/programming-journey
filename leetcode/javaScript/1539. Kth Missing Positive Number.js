var findKthPositive = function(arr, k) {
  let count=0;
  for(item of arr){
      if(item<=k+count){
          count++;
      }
  }
  return k+count;
};

console.log(findKthPositive([2,3,4,7,11],5))