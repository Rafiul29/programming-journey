// Given a positive integer num, return true if num is a perfect square or false otherwise.

// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

// You must not use any built-in library function, such as sqrt.




var isPerfectSquare = function(num) {
  if( num==1) return true;
  for(let i=1;i<=num/2;i++){
      if(i*i===num){
          return true;
      }
  }
  return false
};

