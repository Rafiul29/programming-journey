
// value swap variable or array

let array=[1,2,3,4,5,6];

// temp variable 
// let temp=array[0];
// array[0]=array[5];
// array[5]=temp
// console.log(array)

//array destructuring way
[array[0],array[4]] = [array[4], array[0]];
console.log(array);



let a=6;
let b=90;
[a,b]=[b,a];
console.log(a,b);


// mathmatical way

let x=90;
let y=50;
//order of execution first bracket x=y
y=x+(x=y)-y;
console.log(x,y)