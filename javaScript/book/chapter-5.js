// 5.1: Measuring time - console.time()

// console.time() can be used to measure how long a task in your code takes to run.

// console.time('response in');


// alert('Click to continue');

// console.timeEnd('response in');

// alert('One more time');
// console.timeEnd('response in');

// var elms = document.getElementsByTagName('*'); //select all elements on the page

// console.time('Loop time');

// for (var i = 0; i < 5000; i++) {
//  for (var j = 0, length = elms.length; j < length; j++) {
//  // nothing to do ...
//  console.log(i,j)
//  }
// }

// console.timeEnd('Loop time');


// 5.2: Formatting console output

// console.log('%s has %d points', 'Sam', 100);

console.table({foo: 'bar', bar: 'baz'});

var personArr = [
  {
   "personId": 123,
   "name": "Jhon",
   "city": "Melbourne",
   "phoneNo": "1234567890"
  },
  {
   "personId": 124,
   "name": "Amelia",
   "city": "Sydney",
   "phoneNo": "1234567890"
  },
  {
   "personId": 125,
   "name": "Emily",
   "city": "Perth",
   "phoneNo": "1234567890"
  },
  {
   "personId": 126,
   "name": "Abraham",
   "city": "Perth",
   "phoneNo": "1234567890"
  }
  ];
  console.table(personArr, ['name', 'personId','city','phoneNo']);