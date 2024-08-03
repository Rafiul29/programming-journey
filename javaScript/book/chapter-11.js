// 11.1: Ternary operators

var animal = 'kitty';
var result = (animal === 'kitty') ? 'cute' : 'still nice';


// var a = 1;
// a === 1 ? alert('Hey, it is 1!') : 0;


// a === 1 ? alert('Hey, it is 1!!') : alert('Weird, what could it be?');

// if (a === 1) alert('Hey, it is 1!!!')
// else alert('Weird, what could it be?');


// Ternaries can be nested to encapsulate additional logic. For example

// foo ? bar ? 1 : 2 : 3
// To be clear, this is evaluated left to right
// and can be more explicitly expressed as:
// foo ? (bar ? 1 : 2) : 3
let foo=true
let bar=false
// This is the same as the following if/else
if (foo) {
  if (bar) {
    1
  } else {
    2
  }
} else {
  3
}



// 11.2: Switch statement

var value = 1;
switch (value) {
  case 1:
    console.log('I will always run');
    break;
  case 2:
    console.log('I will never run');
    break;
}

// 11.4: Strategy
const AnimalSays = {
  dog() {
    return 'woof';
  },
  cat() {
    return 'meow';
  },
  lion() {
    return 'roar';
  },
  default() {
    return 'moo';
  }
};

function makeAnimalSpeak (animal) {
  // Match the animal by type
  const speak = AnimalSays[animal] || AnimalSays.default;
  console.log(animal + ' says ' + speak());
 }


 makeAnimalSpeak('dog')


//  11.5: Using || and && short circuiting


// The Boolean operators || and && will "short circuit" and not evaluate the second parameter if the first is true or false respectively. 

// var x = 10
// x == 10 && alert("x is 10 i")

// x == 10 || alert("x is not 10 ii")

console.log(10 && 'yes')
console.log(10 || 'no')