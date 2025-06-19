// let canvas=document.createElement('canvas')
// canvas.width=500
// canvas.height=250


// let ctx=canvas.getContext('2d')
// ctx.font='30px cursive'
// ctx.fillText("Hello world!", 50, 50);
// document.body.appendChild(canvas);

// let img=new Image()
// img.src='./images.jpeg'
// document.body.appendChild(img)


// 3: Built-in Constants
// 3.1: null

console.log(undefined==null)  // true
console.log(undefined===null) // false

console.log(null==null) // true
console.log(null===null) // true

console.log(typeof null)  // object
console.log(typeof undefined) // undefined
console.log(undefined===undefined) // true
console.log(undefined==undefined) // true

//  3.2: Testing for NaN using isNaN()
isNaN(NaN); // true
isNaN(1); // false: 1 is a number
isNaN(-2e-4); // false: -2e-4 is a number (-0.0002) in scientific notation
isNaN(Infinity); // false: Infinity is a number
isNaN(true); // false: converted to 1, which is a number
isNaN(false); // false: converted to 0, which is a number
isNaN(null); // false: converted to 0, which is a number
isNaN(""); // false: converted to 0, which is a number
isNaN(" "); // false: converted to 0, which is a number
isNaN("45.3"); // false: string representing a number, converted to 45.3
isNaN("1.2e3"); // false: string representing a number, converted to 1.2e3
isNaN("Infinity"); // false: string representing a number, converted to Infinity
isNaN(new Date); // false: Date object, converted to milliseconds since epoch
isNaN("10$"); // true : conversion fails, the dollar sign is not a digit
isNaN("hello"); // true : conversion fails, no digits at all
isNaN(undefined); // true : converted to NaN
isNaN(); // true : converted to NaN (implicitly undefined)
isNaN(function(){}); // true : conversion fails
isNaN({}); // true : conversion fails
isNaN([1, 2]); // true : converted to "1, 2", which can't be converted to a number


console.log(isNaN([])) //false
console.log(isNaN([34])) //false

console.log(isNaN([3,4])) // true
console.log(isNaN([true])) //true




// When the Number.isNaN is called with one argument number, the following steps are taken:

// 1. If Type(number) is not Number, return false.
// 2. If number is NaN, return true.
// 3. Otherwise, return false.


// The one and only
Number.isNaN(NaN); // true
// Numbers
Number.isNaN(1); // false
Number.isNaN(-2e-4); // false
Number.isNaN(Infinity); // false
// Values not of type number
Number.isNaN(true); // false
Number.isNaN(false); // false
Number.isNaN(null); // false
Number.isNaN(""); // false
Number.isNaN(" "); // false
Number.isNaN("45.3"); // false
Number.isNaN("1.2e3"); // false
Number.isNaN("Infinity"); // false
Number.isNaN(new Date); // false
Number.isNaN("10$"); // false
Number.isNaN("hello"); // false
Number.isNaN(undefined); // false
Number.isNaN(); // false
Number.isNaN(function(){}); // false
Number.isNaN({}); // false
Number.isNaN([]); // false
Number.isNaN([1]); // false
Number.isNaN([1, 2]); // false
Number.isNaN([true]); // false

// 3.3: NaN
console.log(Number.isNaN(NaN))
console.log(window.hasOwnProperty('NaN')) //true


// 3.4: undefined and null
console.log(typeof undefined === 'undefined') //true
console.log(typeof null==='object') //true


// let foo;
// console.log(foo===undefined)  //true

// let  foo={
//   a:'a'
// }
// console.log(foo.b===undefined) //true

// function foo(){
//   return
// }
// console.log(foo()===undefined)



// function foo(param){
//   console.log(param===undefined)
// }

// foo('a')
// foo()

// 3.5: Infinity and -Infinity
// 1 / 0; // Infinit

console.log(Number.MAX_VALUE)

console.log(-Infinity > 123192310293) //false
console.log(Infinity > 123192310293) //true
console.log(12/Infinity) // 0
console.log(1/0) // Infinity
console.log(1/-0) // -Infinity
console.log(0===-0) //true
console.log(Infinity===-Infinity) //false


var a = 0, b = -0;
a === b; // true
1 / a === 1 / b; // false


// 3.6: Number constants
console.log(Number.MAX_VALUE)
console.log(Number.MAX_SAFE_INTEGER)
console.log(Number.MIN_VALUE)
console.log(Number.MIN_SAFE_INTEGER)
console.log(Number.EPSILON)
console.log(Number.POSITIVE_INFINITY)
console.log(Number.NEGATIVE_INFINITY)
console.log(Number.NaN)

// 3.7: Operations that return NaN

// Mathematical operations on values other than numbers return NaN.
// "b" * 3
// "cde" - "e"
// [1, 2, 3] * 2

console.log([2]*[3]) //6
console.log('a'+'b') // ab
console.log(0/0)  // NaN

// 3.8: Math library functions that return NaN
console.log(Math.floor('a')) // NaN
console.log(Math.sqrt(-1)) //NaN