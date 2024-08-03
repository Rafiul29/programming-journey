// Section 19.1: Function Scoping

// Functions in JavaScript provide organized, reusable code to perform a set of actions

// Functions simplify the coding process, prevent redundant logic, and make code easier to follow. This topic describes the declaration and utilization of functions, arguments, parameters, return statements and scope in JavaScript.


//**********Section 19.1: Function Scoping***********

// function foo(){
//   a='hello'
//   // console.log(a)
// }
// console.log(a) /// reference error not access in scope
// foo()

function foo() {
  a = 'hello'
  function bar() {
    let b = 'word'
    console.log(a)
    console.log(b)
  }
  bar()
  console.log(a); // => 'hello'
  // console.log(b); // reference error
}
// console.log(a) /// reference error not access in scope
foo()


function foo() {
  const a1 = true;
  function bar() {
    const a1 = false; // different variable
    console.log(a1); // false
  }
  // const a1 = false; // SyntaxError
  // a1 = false; // TypeError
  // console.log(a1); // true
}


//***********Section 19.2: Currying**********

// Currying is the transformation of a function of n arity or arguments into a sequence of n functions taking only one argument.

var prism1 = function (l, w, h) {
  return l * w * h;
}

//  console.log(prism1(2,3,4))

function prism2(l) {
  return function (w) {
    return function (h) {
      return l * w * h
    }
  }
}

// console.log(prism2(2)(3)(5))


// arrow function
var prism3 = l => w => h => l * w * h
  // console.log(prism3(5)(6)(7))


  //*******Section 19.3: Immediately Invoked Function Expressions********

  // Immediately Invoked Function Expression (IIFE for short). These are essentially self-executing anonymous functions .They have access to the surrounding scope, but the function itself and any internal variables will be inaccessible from outside.An important thing to note about IIFE is that even if you name your function, IIFE are not hoisted like standard functions are and cannot be called by the function name they are declared with.

  // (function(){
  //   console.log('hello')
  // })();

  // (function(){
  // console.log('You can easily pass parameters into an IIFE:')
  // }())

  // (function(message){
  //   console.log(message)
  // }('hello word pass paramter'))

  // var example = (function() {
  //   return 42;
  //  }());
  //  console.log(example); // => 42

  // (() => console.log("Hello!"))(); 

  (function namedIIFE() {
    console.log('deewfewfewfewfwef')
  }());

//*********Section 19.4: Named Functions*********

let nameSum = function sum(a, b) {
  return a + b
}
// console.log(nameSum(2,3))

let unnamed = function (a, b) {
  return a + b
}

// console.log(unnamed(4,5))
// Named functions are hoisted
// When using an anonymous function, the function can only be called after the line of declaration, whereas a named function can be called before declaration.

// foo()
// function foo(){
//   console.log('using named function hoiested')
// }


// Named Functions in a recursive scenario

var say = function (times) {
  if (times > 0) {
    console.log('Hello!');
    say(times - 1);
  }
}
//  say(5)


//  The name property of functions


var foo1 = function () { }
console.log(foo1.name);

function foo2() { }
console.log(foo2.name)

var foo = function bar() { }
console.log(foo.name); // outputs 'bar'



// Section 19.9: Call and apply

// Functions have two built-in methods that allow the programmer to supply arguments and the this variable differently: call and apply
let obj = {
  a: 1,
  b: 2,
  set: function (a, b) {
    this.a = a;
    this.b = b;
  }
};

obj.set(3, 7) // normal syntax
obj.set.call(obj, 6, 7) //equivalent to above
obj.set.apply(obj, [4, 5])  // equivalent to the above; note that an array is used
obj.set.bind(obj, 9, 0)
console.log(obj)


// Section 19.10: Partial Application
function reversedMultiplyThenAdd(c, b, a) {
  return a * b + c;
}

function factory(b, c) {
  return reversedMultiplyThenAdd.bind(null, c, b);
}
var multiplyTwoThenAddTen = factory(2, 10);
console.log(multiplyTwoThenAddTen(10)) //30



//  Section 19.12: Function Arguments, "arguments" object, rest and spread parameters

function addition(argument1, argument2) {
  return argument1 + argument2;
}

//  arguments object
// (function () {
//    console.log(arguments)
   
// })(0, 'str', [2,3,4,5],{a:4})

// (function() {
//   console.log(typeof arguments)  //object
// })();


// Rest parameters: function (...parm) {}
(function(...rest){
  console.log(rest)
})(1,2,3,4,5,6)



// Section 19.15: Recursive Function

function fact(n){
  if(n==1) return 1;

  return n*fact(n-1)
}

console.log(fact(3))


function countEvenNumbers (arr) {
  // Sentinel value. Recursion stops on empty array.
  if (arr.length < 1) {
  return 0;
  }
  // The shift() method removes the first element from an array
  // and returns that element. This method changes the length of the array.
  var value = arr.shift();
  // `value % 2 === 0` tests if the number is even or odd
  // If it's even we add one to the result of counting the remainder of
  // the array. If it's odd, we add zero to it.
  return ((value % 2 === 0) ? 1 : 0) + countEvens(arr);
 }