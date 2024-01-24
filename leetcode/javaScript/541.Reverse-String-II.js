var reverseStr = function (s, k) {
  let newA = s.split("");
  let spliceA = newA.splice(0, k).reverse();
  return spliceA.join("").concat(newA.join(""));
};

console.log(reverseStr("bacdefg", 2));
