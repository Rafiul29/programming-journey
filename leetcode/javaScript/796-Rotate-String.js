
var rotateString = function(s, goal) {
  for (let i = 0; i < s.length; i++) {
      if (s === goal) return true;
      s = s.substring(1) + s[0];
      console.log(s)
  }
  return false
};

console.log(rotateString("abcde","cdeab"))