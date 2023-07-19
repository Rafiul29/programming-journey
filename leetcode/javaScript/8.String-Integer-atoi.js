

var myAtoi = function (s) {
  let st = s.trim();
  let num = parseInt(st);
  let res = !isNaN(num) ? num : 0;

  if (res > Math.pow(2, 31) - 1) {
    return Math.pow(2, 31) - 1;
  } else if (res < -1 * Math.pow(2, 31)) {
    return -1 * Math.pow(2, 31);
  } else {
    return res;
  }
};

console.log(myAtoi("-91283472332"));
