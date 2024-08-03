// Chapter 18: Loops

// Section 18.1: Standard "for" loops

// Standard usage
for (var i = 0; i < 100; i++) {
//  console.log(i);
}


// Multiple declarations
var array = ['a', 'b', 'c'];
for (var i = 0; i < array.length; i++) {
//  console.log(array[i]);
}

// Decremented loop

for (var i = 100; i >=0; i--) {
  // console.log(i);
 }

//  Section 18.2: "for ... of" loop
const iterable = [0, 1, 2];
for (let i of iterable) {
//  console.log(i);
}

// Strings of for...of in other collections

// for...of will treat a string as a sequence of Unicode characters:

const string='abcde'
for(let chr of string){
  // console.log(chr)
}


// Sets
// A Set object will eliminate duplicates.
const names=['bob', 'alejandro', 'zandra', 'anna', 'bob'];
const uniqueNames=new Set(names)

for(let name of uniqueNames){
  // console.log(name)
}


// Maps
// You can also use for...of loops to iterate over Maps. This works similarly to arrays and sets, except the iteration variable stores both a key and a value.

const map=new Map()
map.set('abc',1)
map.set('def',2)

for(const iterable of map){
  // console.log(iterable)
}
for(const [key,value] of map){
  console.log(key,value)
}

// console.log(map)

// Objects

// for...of loops do not work directly on plain Objects; but, it is possible to iterate over an object’s properties by switching to a for...in loop, or using Object.keys()

const someObject={name:"rafi"}
for(let key of Object.keys(someObject)){
  console.log(key+":"+someObject[key])
}

// Section 18.3: "for ... in" loop

// . It also includes properties from the prototype, so it may be necessary to check if the key is within the object using hasOwnProperty. If any attributes in the object are defined by the defineProperty/defineProperties method and set the param enumerable: false, those attributes will be inaccessible.

var object = {"a":"foo", "b":"bar", "c":"baz"};

// `a` is inaccessible
Object.defineProperty(object,'a',{
  enumerable:false
})

for(let key in object){
  if(object.hasOwnProperty(key)){
    // console.log(key,object[key])
  }
}


//********* */ Section 18.4: "while" Loops*********
var i = 0;
while (i < 100) {
//  console.log(i);
 i++;
}

// Do...while Loop
var i = 101;
do {
//  console.log(i);
} while (i < 100);


//*******Section 18.5: "continue" a loop ******
// When you put the continue keyword in a for loop, execution jumps to the update expression (i++ in the example):

for (var i = 0; i < 3; i++) {
  if (i === 1) {
  continue;
  }
  // console.log(i);
 }

//  Continuing a While Loop
var i = 0;
while (i < 3) {
 if (i === 1) {
 i = 2;
 continue
 }

//  console.log(i)
 i++
}


//******Section 18.8: Break and continue labels******
// Break and continue statements can be followed by an optional label which works like some kind of a goto statement, resumes execution from the label referenced position
for(var i = 0; i < 5; i++){
  nextLoop2Iteration:
  for(var j = 0; j < 5; j++){
  if(i == j) break nextLoop2Iteration;
  console.log(i, j);
  }
}