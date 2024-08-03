// Chapter 6: Datatypes in JavaScript

// 6.1: typeof

// 1. String
console.log(typeof "String") // string
console.log(typeof Date(2011,01,01)) // string

// 2. Number
console.log(typeof 43)

// 3. Bool
console.log(typeof true)
console.log(typeof false)

// 4. Object
console.log(typeof {})
console.log(typeof [])
console.log(typeof null)
console.log(typeof /aaa/) //Regex
console.log(typeof Error()) //error

// 5 Function
function name() {

}
console.log(typeof name)


// 6 Undefined
let a
console.log(typeof a)

// false
console.log([] == [])
console.log({} == {})
console.log({} == [])

// true
let x = []
console.log(x == x)

let obj = {}
console.log(obj == obj)


//  6.2: Finding an object's class
function sum(...arguments) {
  if (arguments.length === 1) {
    const [firstArg] = arguments
    console.log(firstArg instanceof Array)
    if (firstArg instanceof Array) { //firstArg is something like [1, 2, 3]
      return sum(...firstArg) //calls sum(1, 2, 3)
    }
  }
  return arguments.reduce((a, b) => a + b)
}

console.log(sum(1))


// 6.3: Getting object type by constructor name

// 1.String
console.log(Object.prototype.toString.call("String"))

// 2.Number 
console.log(Object.prototype.toString.call(32))

// 3.Object
console.log(Object.prototype.toString.call({}))
console.log(Object.prototype.toString.call(Object()))

// 4.Function
console.log(Object.prototype.toString.call(function(){}))
// 5.Date
console.log(Object.prototype.toString.call(new Date()))


//6.Regex
console.log(Object.prototype.toString.call(new RegExp()))
console.log(Object.prototype.toString.call(/foo/))

//7.Array
console.log(Object.prototype.toString.call([]))

//8.Null
console.log(Object.prototype.toString.call(null))

//9.undefined
console.log(Object.prototype.toString.call(undefined))

//10.Error
console.log(Object.prototype.toString.call(Error()))

//11.Boolean
console.log(Object.prototype.toString.call(true))

