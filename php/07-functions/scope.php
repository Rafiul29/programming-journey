<?php


// $name ='John';

// function sayHello() {
//     global $name; // Accessing the global variable
//     echo "Hello, $name!";
//     echo $GLOBALS['name']; // Accessing the global variable using $GLOBALS supe gloabal
// }

// sayHello(); // Outputs: Hello, John!




// function sayHello() {
//     global $name;
//     $name = 'John'; // Local variable
//     echo "Hello, $name!". PHP_EOL;
// }
// sayHello(); // Outputs: Hello, John!

// echo $name.PHP_EOL; // This will cause an error because $name is not defined in this scope




 function doSomething() {
    static $x; // Static variable retains its value between function calls
    $x  = $x?? 0;
    $x += 1; // Increment x by 1
     echo "Inside doSomething: x = $x". PHP_EOL;
 }

 doSomething(); 
 doSomething(); 
 doSomething(); 