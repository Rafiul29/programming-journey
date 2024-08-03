//*******Section 20.1: Higher-Order Functions********

// functions that operate on other functions, either by taking them as arguments or by returning them (or both), are called higher-order functions.

// A higher-order function is a function that can take another function as an argument. You are using higher-order functions when passing callbacks.


function iAmCallbackFunction() {
  console.log("callback has been invoked");
 }


 function iAmJustFunction(callbackFn) {
  // do some stuff ...
  // invoke the callback function.
  callbackFn();
 }

//  iAmJustFunction(iAmCallbackFunction);


 function iAmJustFunction() {
  // do some stuff ...
  // return a function.
  return function iAmReturnedFunction() {
  console.log("returned function has been invoked");
  }
 }
//  iAmJustFunction()();



//  Section 20.3: Pure Functions

// A basic principle of functional programming is that it avoids changing the application state (statelessness) and variables outside its scope (immutability).


//Pure functions are functions that

//***with a given input, always return the same output
//***they do not rely on any variable outside their scope
//***they do not modify the state of the application (no side effects)

// Pure functions must not change any variable outside their scope

// Impure function
let obj = { a: 0 }
const impure = (input) => {
 // Modifies input.a
 input.a = input.a + 1;
 return input.a;
}
let b = impure(obj)
// console.log(obj) // Logs { "a": 1 }
// console.log(b) // Logs 1

// console.log(impure(obj))


// Pure function
let obj1 = { a: 0 }
const pure = (input) => {
 // Does not modify obj
 let output = input.a + 1;
 return output;
}
console.log(pure(obj1))
console.log(pure(obj1))
console.log(pure(obj1))
console.log(pure(obj1))

// Impure function
let a = 1;
let impure2 = (input) => {
 // Multiply with variable outside function scope
 let output = input * a;
 return output;
}
console.log(impure2(2)) // Logs 2
a++; // a becomes equal to 2
console.log(impure2(2)) // Logs 4


// Pure function
let pure4 = (input) => {
  let a = 1;
  // Multiply with variable inside function scope
  let output = input * a;
  return output;
 }
 console.log(pure4(2)) // Logs 2


//  Section 20.4: Accepting Functions as Arguments

function transform(fn,arr){
  let result=[]
  for(let  el of arr){
    result.push(fn(el))
  }
  return result;
}

console.log(transform(x=>x*2,[1,2,3,4]))