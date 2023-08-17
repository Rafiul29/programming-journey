var merge = function(nums1, m, nums2, n) {
  const newArr1=nums1.slice(0,m)
  const newArr2=nums2.slice(0,n);
  let mergeArr=newArr1.concat(newArr2);
 let sort= mergeArr.sort((a,b)=>a-b)
  return sort
};

console.log(merge([0],0,[1],1))