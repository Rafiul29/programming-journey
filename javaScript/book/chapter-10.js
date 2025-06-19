// Chapter 10: Comparison Operations

// 10.1: Abstract equality / inequality and type conversion

// js falsy value
console.log(Boolean(0))
console.log(Boolean(''))
console.log(Boolean(NaN))
console.log(Boolean(false))
console.log(Boolean(null))
console.log(Boolean(undefined))


console.log(''==0) // true (false==false)
console.log(0=='0') // true (value same)
console.log(''=='0') // false (false==true)

console.log(false==0) // true 
console.log(false=='0') // true


console.log("" != 0)  //false
console.log(0 != '0') //false
console.log("" != '0') // true
// console.log(false==false)

console.log(false != 0) //false
console.log(false != '0') //false


console.log(Number('')) // 0
console.log(Number('0')) // 0
console.log(Number(false)) // 0





var test = (a,b) => Number(a) == Number(b);
test("", 0); // true;
test("0", 0); // true
test("", "0"); // true;
test("abc", "abc"); // false as operands are not numbers


var test = (a,b) => String(a) == String(b);
test("", 0); // false;
test("0", 0); // true
test("", "0"); // false;



// 10.2: NaN Property of the Global Object

console.log(1*'two'===NaN) //false
console.log(NaN===NaN) //false


// Non-equal comparisons will always return true
console.log(NaN!=0) //true
console.log(NaN!=NaN) //true


//10.4: Null and Undefined

// The differences between null and undefined

null == undefined // true
null === undefined // false

// They represent slightly different things:

// undefined represents the absence of a value, such as before an identifier/Object property has been created or in the period between identifier/Function parameter creation and it's first set, if any.

// null represents the intentional absence of a value for an identifier or property which has already been created


// They are different types of syntax:

//** */ undefined is a property of the global Object, usually immutable in the global scope. This means anywhere you can define an identifier other than in the global namespace could hide undefined from that scope (although things can still be undefined)

//*** */ null is a word literal, so it's meaning can never be changed and attempting to do so will throw an Error.

// The similarities between null and undefined
// null and undefined are both falsy



// 10.5: Abstract Equality (==)

1 == 1; // true
1 == true; // true (operand converted to number: true => 1)
1 == '1'; // true (operand converted to number: '1' => 1 )
1 == '1.00'; // true
1 == '1.00000000001'; // false
1 == '1.00000000000000001'; // true (true due to precision loss)
null == undefined; // true (spec #2)
1 == 2; // false
0 == false; // true
0 == undefined; // false
0 == ""; // true


//  10.7: Automatic Type Conversions

// JavaScript is loosely typed. A variable can contain different data types, and a variable can change its data type:
// let a='hello'
// a=5

console.log(5+7) //12
console.log(5+'6') //56
console.log('5'+6) //56
console.log(5-'6') // -1
console.log('5'-6) // -1
console.log(5-'x') // NaN

// console.log(Boolean([]))
// console.log(Boolean({}))
// console.log(Boolean(true))


// 10.8: Logic Operators with Non-boolean values (boolean coercion)

// **** Logical OR (||), reading left to right, will evaluate to the first truthy value. If no truthy value is found, the last value is returned.

var a = 'hello' || ''; // a = 'hello'
var b = '' || []; // b = []
var c = '' || undefined; // c = undefined
var d = 1 || 5; // d = 1
var e = 0 || {}; // e = {}
var f = 0 || '' || 5; // f = 5
var g = '' || 'yay' || 'boo'; // g = 'yay'


//*** Logical AND (&&), reading left to right, will evaluate to the first falsy value. If no falsey value is found, the last value is returned.


var a = 'hello' && ''; // a = ''
var b = '' && []; // b = ''
var c = undefined && 0; // c = undefined
var d = 1 && 5; // d = 5
var e = 0 && {}; // e = 0
var f = 'hi' && [] && 'done'; // f = 'done'
var g = 'bye' && undefined && 'adios'; // g = undefined


// 10.9: Empty Array
/* ToNumber(ToPrimitive([])) == ToNumber(false) */
[] == false; // true

console.log(0===-0)



// 10.10: Equality comparison operations

// SameValue
Object.is(1, 1); // true
Object.is(+0, -0); // false
Object.is(NaN, NaN); // true
Object.is(true, "true"); // false
Object.is(false, 0); // false
Object.is(null, undefined); // false
Object.is(1, "1"); // false
Object.is([], []); // false

// SameValueZero

// It behaves like SameValue, but considers +0 and -0 to be equal.

[1].includes(1); // true
[+0].includes(-0); // true
[NaN].includes(NaN); // true
[true].includes("true"); // false
[false].includes(0); // false
[1].includes("1"); // false
[null].includes(undefined); // false
[[]].includes([]); // false



// Strict Equality Comparison

// It behaves like SameValue, but
// Considers +0 and -0 to be equal.
// Considers NaN different than any value, including itself
// You can use this comparison algorithm via the === operator (ECMAScript 3).
// There is also the !== operator (ECMAScript 3), which negates the result of ===.
// Examples:
1 === 1; // true
+0 === -0; // true
NaN === NaN; // false
true === "true"; // false
false === 0; // false
1 === "1"; // false
null === undefined; // false
// [] === []; // false


// 10.11: Relational operators (<, <=, >, >=)

// When both operands are numeric, they are compared normally:
1 < 2 // true
2 <= 2 // true
3 >= 5 // false
true < false // false (implicitly converted to numbers, 1 > 0)

// When both operands are strings, they are compared lexicographically (according to alphabetical order):
'a' < 'b' // true
'1' < '2' // true
'100' > '12' // false   ('100' is less than '12' lexicographically!)


// When one operand is a string and the other is a number, the string is converted to a number before comparison:
'1' < 2 // true
'3' > 2 // true
true > '2' // false (true implicitly converted to number, 1 < 2)


// When the string is non-numeric, numeric conversion returns NaN (not-a-number). Comparing with NaN always returns false:

1 < 'abc' // false
1 > 'abc' // false


// But be careful when comparing a numeric value with null, undefined or empty strings:

1 > '' // true
1 < '' // false
1 > null // true
1 < null // false
1 > undefined // false
1 < undefined // false


// 10.12: Inequality

// Operator != is the inverse of the == operator.
// Will return true if the operands aren't equal.
1 != '1' // false
1 != 2 // true
1 !== '1' // true
1 !== 2 // true
1 !== 1 // false

