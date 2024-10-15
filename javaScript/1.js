// var isPalindrome = function(x) {
//   if(x<0){
//       return false
//   }
//   let revernumber=Number(String(x).split('').reverse().join(''))
//   return x===revernumber

// };

// // console.log(isPalindrome(10))  // true


// var containsDuplicate = function(nums) {
//   return nums.some((val,i,arr)=>arr.indexOf(val)!==i)
// };

// // console.log(containsDuplicate([1,2,3])) // true


// var plusOne = function(digits) {
//     return String(Number(digits.join(""))+1).split('').map(n=>Number(n))
// };

// const digits1 = [9];
// const result1 = plusOne(digits1);
// // console.log(result1); // Output: [1, 2, 4]



// var merge = function(nums1, m, nums2, n) {
//   let sliceNums1=nums1.slice(0,m)
//   let sliceNums2=nums2.slice(0,n)

//    console.log([...sliceNums1,...sliceNums2].sort((a,b)=>a-b));
// };

// const nums1 = [1];
// const m = 1;
// const nums2 = [];
// const n = 0;

// merge(nums1, m, nums2, n);
// // console.log(nums1);


// const a={}
// const b=a
// console.log(a===b)


let a=1

function fun(){
  console.log(a)
}
fun()