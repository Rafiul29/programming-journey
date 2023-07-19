// Remove falsy value form any array
// javaScript 6 falsy value
// false,0,null,undefined,NaN,""(Empty string)

Boolean(2 > 4); //false
Boolean(2 < 4); // true
Boolean("JavaScript"); //true;
Boolean(""); // false

function removeFalsyValue(arr) {
  // return arr.filter(Boolean)
  //another mehtod remove falsy value
  let result = arr.filter((e) => {
    if (e !== false || e !== null || e !== undefined || e !== NaN) {
      return e;
    }
  });
  return result;
}

console.log(removeFalsyValue([1, null, 2, undefined, 3, false, 4, NaN]));
