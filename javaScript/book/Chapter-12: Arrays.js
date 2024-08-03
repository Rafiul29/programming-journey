// 12.1: Converting Array-like Objects to Arrays

// var realArray = ['a', 'b', 'c'];

// console.log(realArray)


// function func(){
//   console.log(arguments)
// }

// func(1,2,3,4)


const arrayLike = {
  0: 'Value 0',
  1: 'Value 1',
  length: 2
};

// ****** 1. Array.from: ******

// const realArray=Array.from(arrayLike)
// realArray.forEach(val=>console.log(val))
// console.log(realArray)



//******** 2. for...of:*********
// let realArray=[] 
// for(const element of arrayLike) { //arrayLike is not iterable 
//   realArray.append(element); 
//  }



//**************** 3.Spread operator:************
// const arr=[...arrayLike] //arrayLike is not iterable
// console.log(arr)



// *************** 4. Object.values:************
// console.log(Object.values(arrayLike))

// ****** 5. Object.keys: ********
// console.log(Object.keys(arrayLike))
// Object.keys(arrayLike).map(key => console.log(key))




// Section 12.2: Reducing values

// Array Sum
const res = [1, 2, 3, 4].reduce(function (a, b) {
  return a + b;
}, 0);

// console.log(res)


//  Flatten Array of Objects
var array = [{
  key: 'one',
  value: 1
}, {
  key: 'two',
  value: 2
}, {
  key: 'three',
  value: 3
}];

const res1 = array.reduce(function (obj, curr) {
  obj[curr.key] = curr.value
  return obj
}, {})


array.reduce((obj, current) => Object.assign(obj, {
  [current.key]: current.value
}), {});

array.reduce((obj, current) => ({ ...obj, [current.key]: current.value }), {});


//  Map Using Reduce
function map(list, fn) {
  return list.reduce(function (newList, item) {
    return newList.concat(fn(item))
  }, [])
}

// console.log(map([1,2,3],function(n){return n*n}))



// Find Min or Max Value

var arr = [4, 2, 1, -10, 9]

const minVal = arr.reduce(function (a, b) {
  return a < b ? a : b
}, Infinity)

// console.log(minVal)

const maxVal = arr.reduce(function (a, b) {
  return a > b ? a : b
}, -Infinity)

// console.log(maxVal)


// Find Unique Values
var findUniqueArr = [1, 2, 1, 5, 9, 5];
const unifilter = findUniqueArr.filter((num, i, arr) => arr.indexOf(num) == i)

// console.log(unifilter)
// Elements can be skipped
const UniqueVal = findUniqueArr.reduce(function (prev, num) {
  if (prev.indexOf(num) === -1) {
    prev.push(num)
  }
  return prev
}, [])

// console.log(UniqueVal)


// ******** 12.3: Mapping values ********
// It is often necessary to generate a new array based on the values of an existing array.

const mapArr = ['one', 'two', 'three', 'four']
const arrItemLength = mapArr.map((value) => {
  // console.log(this)
  return value.length
})
// console.log(arrItemLength)


//Section 12.4: Filtering Object Arrays

// The filter() method accepts a test function, and returns a new array containing only the elements of the original array that pass the test provided.

var numbers = [5, 32, 43, 4];
let odd = numbers.filter(num => num % 2 == 0)
// console.log(odd)

var people = [{
  id: 1,
  name: "John",
  age: 28
}, {
  id: 2,
  name: "Jane",
  age: 31
}, {
  id: 3,
  name: "Peter",
  age: 55
}]

let young = people.filter(function (person) {
  return person.age < 35
})
//  console.log(young)




// **************Section 12.5: Sorting Arrays **************
const animal = ["zebras", "dogs", "degs", "elephants", "penguins"]
const sortAnimal = animal.sort((a, b) => {
  // return a.localeCompare(b)
  return a < b
})

// console.log(sortAnimal)

// Numerical Sort (ascending)
const numSortAsc = [100, 1000, 10, 10000, 1].sort(function (a, b) {
  return a - b;
});

//  console.log(numSortAsc)

// Numerical Sort (descending)

const numericalSortDsc = [100, 1000, 10, 10000, 1].sort(function (a, b) {
  return b - a;
});

//  console.log(numericalSortDsc)

//  Sorting array by even and odd numbers

const sortOddandEven = [10, 21, 4, 15, 7, 99, 0, 12].sort(function (a, b) {
  // console.log('a->',(a & 1) ,"b->", (b & 1))

  // return (a & 1) - (b & 1)  || a-b
});

//  console.log(sortOddandEven)
//  console.log(21&1)


//  Date Sort (descending)
var dates = [
  new Date(2007, 11, 10),
  new Date(2014, 2, 21),
  new Date(2009, 6, 11),
  new Date(2016, 7, 23)
];

const sortDate = dates.sort(function (a, b) {
  return a.getFullYear() - b.getFullYear();
});

// console.log(sortDate)


// Section 12.6: Iteration

// A traditional for loop has three components:
// 1. The initialization: executed before the look block is executed the first time
// 2. The condition: checks a condition every time before the loop block is executed, and quits the loop if false
// 3. The afterthought: performed every time after the loop block is executed


let myArray = [1, 2, 3, 4];
for (var i = 0, length = myArray.length; i < length; i++) {

}


for (var i = myArray.length - 1; i > -1; i--) {
  // console.log(myArray[i]);
}


var i = 0, length = myArray.length;
for (; i < length;) {
  //  console.log(myArray[i]);
  i++;
}


var key = 0, value;
for (; value = myArray[key++];) {
  //  console.log(value);
}


for (var i in myArray) {
  // console.log(i); // logs 0, 1, 2, "foo"
}


//  Array.prototype.forEach()

[1, 2, 3, 4].forEach(function (value, index, arr) {
  var twoValue = value * 2;
  // console.log("2 * value is: %d", twoValue);
});

var myArray1 = [1, 2, 3, 4];
for (var i = 0; i < myArray1.length; ++i) {
  var twoValue = myArray1[i] * 2;
  //  console.log("2 * value is: %d", twoValue);
}

i = 0, sum = 0;
while (i++ < myArray.length) {
  sum += i;
}
// console.log(sum);


// Array.prototype.every

// Since ES5, if you want to iterate over a portion of an array, you can use Array.prototype.every, which iterates until we return false:

let ev = [2, 4, 8, 10].every(function (value, index, arr) {
  // console.log(value);
  return value % 2 === 0; // iterate until an odd number is found
});

//  console.log(ev)

for (var i = 0; i < arr.length && (arr[i] % 2 !== 0); i++) { // iterate until an odd number is found
  //  console.log(arr[i]);
}

// Array.prototype.some
let so = [2, 4, 7, 9].some(function (value, index, arr) {
  return value === 7; // iterate until we find value 7
});

//  console.log(so)

var arr = [2, 4, 6, 7, 9];
for (var i = 0; i < arr.length && arr[i] !== 7; i++) {
  // console.log(arr[i]);
}


// *********** Section 12.7: Destructuring an array ********
// An array can be destructured when being assigned to a new variable.

const triangle = [1, 2, 3]
const [a, b, c] = triangle

// Element can be skipped
const [, x, y, , z] = [1, 2, 3, 4, 5, 56]
// console.log(x,y,z)


// Rest operator can be used too
const [p, , , q, , , ...r] = [1, 2, 3, 4, 5, 5, 5, 4, 3, 3, 3]
// console.log(p,q,r)


// **********Section 12.8: Removing duplicate elements*******

let element = ['a', 1, 'a', 2, '1', 1, '1']
//way 1->
let uniqueArrEl1 = element.filter((el, i, arr) => arr.indexOf(el) == i)
// console.log("way1 unique element of array",uniqueArrEl1)

// way 2->
let uniqueArrEl2 = [...new Set(element)]
// console.log("way2 unique element of array",uniqueArrEl2)


// way 3->
let uniqueArrEl3 = element.reduce((prev, el) => {
  if (prev.indexOf(el) == -1) {
    prev.push(el)
  }
  return prev
}, [])

// console.log("way3 unique element of array",uniqueArrEl3)

// way 4->
let uniqueArrEl4 = []
for (let i = 0, len = element.length; i < len; i++) {
  if (!uniqueArrEl4.includes(element[i])) {
    uniqueArrEl4.push(element[i])
  }
}
// console.log("way4 unique element of array",uniqueArrEl4)


// ************ Section 12.9: Array comparison ************





//*************  Section 12.10: Reversing arrays ***********
// .reverse is used to reverse the order of items inside an array.

const reverseArr = [1, 2, 3, 4]

// console.log(reverseArr.reverse())
// console.log(reverseArr)

// Please note that .reverse(Array.prototype.reverse) will reverse the array in place. Instead of returning a reversed copy, it will return the same array, reversed.




// You can also reverse an array 'deeply' by:
function deepReverse(arr) {
  arr.reverse().forEach(el => {
    if (Array.isArray(el)) {
      deepReverse(el)
    }
  })
  return arr
}

// console.log(deepReverse([1, 2, 3, [1, 2, 3, ['a', 'b', 'c']]]))
// res [[['c','b','a'], 3, 2, 1], 3, 2, 1]


//**********Section 12.11: Shallow cloning an array**********

var array1 = [1, 2];
var array2 = [3, 4, 5];
var array3 = array1.concat(array2);

var array1 = ["a", "b"],
  array2 = ["c", "d"],
  array3 = ["e", "f"],
  array4 = ["g", "h"];

var arrConc = [...array1, ...array2, ...array3, ...array4]



// **********Section 12.14: Array spread / rest **********
// Spread operator
let arrS = [1, 2, 3, ...[4, 5, 6]]; // [1, 2, 3, 4, 5, 6]
arrS.push(1, 2, 3, 4)
// console.log(arrS)

let arrS2 = [1, 2, 3, ...[..."456"].map(n => parseInt(n))]
// console.log(arrS2)
// console.log( [..."123456"].map(x=>parseInt(x))) // [1, 2, 3, 4, 5, 6]

// console.log([..."123456"]) // ["1", "2", "3", "4", "5", "6"]


// Rest operator
// The rest operator does the opposite of the spread operator by coalescing several elements into a single one
const [m, n, ...rest] = [1, 2, 3, 4, 5, 6];
// console.log(m,n,rest)

function myFunction(a, b, ...rest) {
  // console.log(rest); //[23,4,1,5,3,2,56]
}

myFunction(0, 23, 23, 4, 1, 5, 3, 2, 56)


// ******* Section 12.15: Filtering values *******
// falsy value 
// '',0,false,null,undefined,NaN

// Filter falsy values
let falseValue = [0, undefined, null, '', 0, false, null, undefined, NaN, true, 5, {}, []]
let filtered = falseValue.filter(el => Boolean(el))// [true,5,{},[]]
// falseValue.filter(Boolean)
// console.log(filtered)


// Another simple example
// This example utilises the same concept of passing a function that takes one argument

function startsWithLetterA(str) {
  if (str && str[0].toLowerCase() == 'a') {
    return true
  }
  return false;
}
var str = 'Since Boolean is a native javascript function/constructor that takes [one optional parameter] and the filter method also takes a function and passes it the current array item as a parameter, you could read it like the following';


var strArray = str.split(" ");

var wordsStartsWithA = strArray.filter(startsWithLetterA);

//["a", "and", "also", "a", "and", "array", "as"]

//*********  Section 12.16: Searching an Array  ***********


let people1 = [
  { name: "bob" },
  { name: "john" }
];

const findP = people1.find(people => people.name == 'bob')
// console.log(findP)

for (var i = 0; i < people.length; i++) {
  if (people[i].name === "bob") {
    break; // we found bob
  }
}

array = [
  { value: 1 },
  { value: 2 },
  { value: 3 },
  { value: 4 },
  { value: 5 }
]



var index = array.findIndex(item => item.value === 3); // 2

//  console.log(index)


//*********Section 12.17: Convert a String to an Array*******
// console.log("StackOverflow".split(""))
// console.log([..."sky is blue"])



//***********Section 12.18: Removing items from an array**********

// (Shift)
// Use .shift to remove the first item of an array.

var array = [1, 2, 3, 4];
// console.log(array.shift())


// (Pop) Further .pop is used to remove the last item from an array.
// console.log(array.pop())


// Splice(start_index,deleteCount)  .splice() to remove a series of elements from an array. .splice() accepts two parameters, the starting index, and an optional number of elements to delete

var arraySplice = [1, 2, 3, 4];
// console.log(arraySplice.splice(1,2)) 
// console.log(arraySplice.splice(2))
// console.log(arraySplice)



// Delete
let deleteA = [1, 2, 3, 4, 5, 6]

delete deleteA[2]
// console.log(deleteA) // [1, 2, empty, 4, 5, 6]


// Array.prototype.length

let arr1 = [1, 2, 3, 4, 5, 6]
arr1.length = 2
// console.log(arr1) //[1,2]


//********Section 12.19: Removing all elements********
// method 1
var arr = [1, 2, 3, 4];
// arr=[]

//method 2
// arr.length=0

//method 3
arr.splice(0)
// console.log(arr)


// console.log([1,2,4,5,6,7].slice(2,5))



//******Section 12.20: Finding the minimum or maximum element*****

var myArrayFindMinandMax = [1, 2, 3, 4];

// way-1
Math.min.apply
// or Math.max.apply by passing null as the first argument, and your array as the second.
// console.log('way1 min->',Math.min.apply(null,myArrayFindMinandMax))
// console.log('way1 max->',Math.max.apply(null,myArrayFindMinandMax))

//way-2 
// In ES6 you can use the ... operator to spread an array and take the minimum or maximum element.
// console.log('way2 min->',Math.min(...myArrayFindMinandMax))
// console.log('way2 max->',Math.max(...myArrayFindMinandMax))


// way-3
// The following example uses Array.prototype.reduce() to find the minimum or maximum:
const way3Min = myArrayFindMinandMax.reduce((a, b) => {
  return Math.min(a, b)
})

// console.log('Way3 min->',way3Min)

const way3Max = myArrayFindMinandMax.reduce((a, b) => {
  return Math.max(a, b)
})

// console.log('Way3 max->',way3Max)

// or using arrow functions:
// console.log(myArrayFindMinandMax.reduce((a,b)=>Math.min(a,b)))
// console.log(myArrayFindMinandMax.reduce((a,b)=>Math.max(a,b)))


//******Section 12.21: Standard array initialization *******
const arr4 = [1, 2, 3, 4, 5]
const arr5 = new Array(1, 2, 3, 4, 5, 5)
// console.log(arr5)

const arr6 = new Array(5)
// console.log(arr6) // [empty × 5]


//**Section 12.23: Removing/Adding elements using splice()**
let values = [1, 2, 3, 4, 5]
// console.log(values.splice(1,2))
// console.log(values.splice(values.length, 0, 6, 7, 8))
// console.log(values)



//********Section 12.24: The entries() method***********
var letters = ['a', 'b', 'c'];

for (const [index, el] of letters.entries()) {
  // console.log(index,el)
}


//****Section 12.27: Append / Prepend items to Array****

// Unshift
// Use .unshift to add one or more items in the beginning of an array.
var array = [3, 4, 5, 6];
array.unshift(1, 2);
// console.log(array)
// Push

// Further .push is used to add items after the last currently existent item.
array.push(4, 5, 6);
// console.log(array)

// ****Section 12.28: Object keys and values to array****

var object = {
  key1: 10,
  key2: 3,
  key3: 40,
  key4: 20
};

var arr = []
for (let [key, value] of Object.entries(object)) {
  // console.log(key,value)
  arr.push([key, value])
}
//  console.log(arr)


// ***Section 12.30: Checking if an object is an Array **

// Array.isArray(obj) returns true if the object is an Array, otherwise false.

console.log(Array.isArray([])) //  true
console.log(Array.isArray([1, 2, 3, 4])) // ture
console.log(Array.isArray({})) // false
console.log(Array.isArray(1)) // false


// In most cases you can instanceof to check if an object is an Array.
console.log([] instanceof Array) //true
console.log({} instanceof Array) // false

let arr123 = []
console.log(arr123 instanceof Array) //true
console.log(Array.isArray(arr123))


// *****Section 12.31: Insert an item into an array at a specific index ****
var arr = [1, 2, 3, 4, 54]
arr.splice(2, 0, 1, 2, 3, 4, 5);
// console.log(arr)


//**** */ Section 12.32: Sorting multidimensional array ***

var array = [
  ["key1", 10],
  ["key2", 3],
  ["key3", 40],
  ["key4", 20]
];

array.sort(function (a, b) {
  return a[1] - b[1];
})

//  console.log(array)

//***Section 12.33: Test all array items for equality ***

// The .every method tests if all array elements pass a provided predicate test.

[1, 2, 1].every(function (item, i, list) { return item === list[0]; }); // false
[1, 1, 1].every(function (item, i, list) { return item === list[0]; }); // true

[1, 1, 1].every((item, i, list) => item === list[0]); // true


let data = [
  { name: "alice", id: 111 },
  { name: "alice", id: 222 }
];

data.every(function (item, i, list) { return item === list[0]; }); // false

data.every(function (item, i, list) { return item.name === list[0].name; }); // true

data.every((item, i, list) => item.name === list[0].name); // true


//****Section 12.34: Copy part of an Array ****


// The slice() method returns a copy of a portion of an array.

var arr = ["a", "b", "c", "d"];
var newArr = arr.slice(0, 2); // newArr === ["a", "b"]
