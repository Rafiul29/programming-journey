var merge = function(nums1, m, nums2, n) {
  nums1.length = m;
  nums2.length = n;
  nums1.push(...nums2)
 let sort= nums1.sort((a,b)=>a-b)
  return sort
};

console.log(merge([1,2,3,0,0,0],3,[2,5,6],3))
