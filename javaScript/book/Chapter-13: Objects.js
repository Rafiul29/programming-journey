// Chapter 13: Objects

// Property           Description
// value              The value to assign to the property.
// writable           Whether the value of the property can be changed or not.
// enumerable         Whether the property will be enumerated in for in loops or not.
// configurable       Whether it will be possible to redefine the property descriptor or not.
// get                A function to be called that will return the value of the property.
// set                A function to be called when the property is assigned a value.


//***********Section 13.1: Shallow cloning**********

// ES6's Object.assign() function can be used to copy all of the enumerable properties from an existing Object instance to a new one.

const existing = { a: 1, b: 2, c: 3 };
const clone = Object.assign({}, existing);


// Object rest/spread destructuring which is currently a stage 3 proposal provides an even simpler way to create shallow clones of Object instances:

const existing1 = { a: 1, b: 2, c: 3 };
const { ...clone1 } = existing1;

// If you need to support older versions of JavaScript, the most-compatible way to clone an Object is by manually iterating over its properties and filtering out inherited ones using .hasOwnProperty().
var existing3 = { a: 1, b: 2, c: 3 };
var clone3={}

for (let prop in existing3){
  if(existing3.hasOwnProperty(prop)){
    clone3[prop]=existing[prop]
  }
}
// console.log(clone3.a=40,clone3) //40 {a: 40, b: 2, c: 3}
// console.log(existing3)// {a: 1, b: 2, c: 3}


//********Section 13.2: Object.freeze ********
var obj = {
  foo: 'foo',
  bar: [1, 2, 3],
  baz: {
  foo: 'nested-foo'
  }
 };

 Object.freeze(obj);
 console.log(obj)