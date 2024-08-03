// Chapter 7: Strings
// Section 7.1: Basic Info and String Concatenation
let hello='Hello'
let world='World'
let concate=hello+" "+world

console.log(concate)

// Strings can be created from other types using the String() function.
console.log(String(23))
console.log(String(true))
console.log(String(null))

// toString() can be used to convert Numbers, Booleans or Objects to Strings
console.log((1341).toString())
console.log((false).toString())
console.log({}.toString())


console.log(String.fromCharCode(104,101,108,108,111)) // hello

// String object using new keyword is allowed,
let str=new String("this is a string object")
console.log(typeof str) // object 
console.log(typeof str.valueOf()) // string


// 7.2: Reverse String

console.log('string'.split('').reverse().join(''))

console.log('?????.'.split('').reverse().join(''))


// Using spread operator
function reverseString(str){
  console.log([...String(str)])
  return [...String(str)].reverse().join('')
}

console.log(reverseString("stackoverflow"))
console.log(reverseString(123424))
console.log(reverseString([1,3,4,5,5]))


// Custom reverse() function
function reverse(string) {
  var strRev = "";
  for (var i = string.length - 1; i >= 0; i--) {
  strRev += string[i];
  }
  return strRev;
 }
console.log(reverse("zebra")); // "arbez"


// 7.3: Comparing Strings Lexicographically

function strcmp(a,b){
  if(a==b){
    return 0
  }
  if(a>b) return 1;

  return -1;
}

console.log(strcmp('hello','word'))

var arr = ["bananas", "cranberries", "apples"];
arr.sort(function(a, b) {
 return a.localeCompare(b);
})
console.log(arr)


// 7.4: Access character at index in string

// Use charAt() to get a character at the specified index in the string.

let string='aHello world'
console.log(string.charAt(2))
console.log(string.charCodeAt(0)) //ascii code  97
console.log(string[3])

// Section 7.6: Word Counter
function wordCount( val ){
  var wom = val.match(/\S+/g);
  console.log(wom)
  return {
  charactersNoSpaces : val.replace(/\s+/g, '').length,
  characters : val.length,
  words : wom ? wom.length : 0,
  lines : val.split(/\r*\n/).length
  };
 }

 console.log(wordCount( 'sdfv dsv dsc dsdcx dsc' ).words)

//  7.7: Trim whitespace
// To trim whitespace from the edges of a string, use String.prototype.trim:
console.log('     sds  sss dssd dd    '.trim())
console.log('     sds  sss dssd dd    '.trimEnd())
console.log('     sds  sss dssd dd    '.trimStart())

//  Non-standard methods
console.log('     sds  sss dssd dd    '.trimLeft())
console.log('     sds  sss dssd dd    '.trimRight())


// 7.8: Splitting a string into an array
let s='One, two, three, four, five'
console.log(s.split(', ').join('----')) 


// All JavaScript strings are unicode!



// 7.11: Substrings with slice
var a = "0123456789abcdefg";
a.slice(0, 5); // "01234"
a.slice(5, 6); // "5"

// 7.12: Character code
var charCode = "µ".charCodeAt();
console.log(charCode)
console.log("ABCDE".charCodeAt(3))


//7.13: String Representations of Numbers
// JavaScript has native conversion from Number to its String representation for any base from 2 to 36.


// The most common representation after decimal (base 10) is hexadecimal (base 16), but the contents of this section work for all bases in the range.

// In order to convert a Number from decimal (base 10) to its hexadecimal (base 16) String representation the toString  method can be used with radix 16.

let num=10
console.log(num.toString(2)) //binary
console.log(num.toString(8)) //octal
console.log(num.toString(16)) //hexa


// let b16='c'
// console.log(parseInt(b16,16))
let b16 = '3.243f3e0370cdc';
let [i16,f16]=b16.split('.')
let i10=parseInt(i16,16)
let f10=parseInt(f16,16)/Math.pow(16,f16.length)
// Put the base 10 parts together to find the Number
console.log(i10+f10)
console.log(0.1+0.2) //why 0.300000001



// 7.14: String Find and Replace Functions

// *** indexOf( searchString ) and lastIndexOf( searchString )  ***

// indexOf() will return the index of the first occurrence of searchString in the string. If searchString is not found,then -1 is returned.

let str1='Hello World'
console.log(str1.indexOf('o')) //4
console.log(str1.indexOf('foo')) //-1

// lastIndexOf() will return the index of the last occurrence of searchstring or -1 if not found.
console.log(str1.lastIndexOf('o')) //7
console.log(str1.lastIndexOf('dsa')) // -1



// **** includes( searchString, start ) return true or false ****

// includes() will return a boolean that tells whether searchString exists in the string, starting from index start (defaults to 0). This is better than indexOf() if you simply need to test for existence of a substring.
 
console.log( str1.includes("o")); // ture
console.log( str1.includes("o",8)); // false
console.log( str1.includes("odd")) // false



// **** replace( regexp|substring, replacement|replaceFunction ) ****
// replace() will return a string that has all occurrences of substrings matching the RegExp regexp or string substring with a string replacement or the returned value of replaceFunction.

let repstr='hello world'
// repstr=repstr.replace("he",'Ge')
// console.log(repstr)

repstr = repstr.replace( /W.{3}d/g, "Universe" );console.log(repstr)




// 7.15: Find the index of a substring inside a string
console.log('Hellow World'.indexOf('d')) //11
console.log('Hellow World'.indexOf('WOR')) //-1


// 7.16: String to Upper Case
console.log('weqwe'.toUpperCase())

// 7.17: String to Lower Case
console.log('QWDQWD'.toLowerCase())

// 7.18: Repeat a String
console.log('123'.repeat(2)) //123123
console.log('123'.repeat(0))  // ""
//console.log('123'.repeat(-1)) // Throw a RangeError


const repStr='abc'
console.log(new Array(2+1).join(repStr)) //return 'abcabc'

