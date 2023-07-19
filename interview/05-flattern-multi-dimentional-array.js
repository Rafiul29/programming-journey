
// How to flattern a multi-dimensional array

let numberArr=[1,[2,3],4,[5,6],7,[9,10],11];
//one level flat 
console.log(numberArr.flat())
console.log(numberArr.flatMap(el=>el))


//multi level array
let numberArr2=[1,[2,3,[4,5,[6,7,[8,9,10]]]],11]
// we can pass "Infinity" parameter to array flat function
console.log(numberArr2.flat(Infinity))