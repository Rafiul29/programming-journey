var isPalindrome=function(x){
  if(x<0) return false;
  const num = String(x).split("").reverse().join("");
  return Number(num)===x
}

console.log(isPalindrome(121))