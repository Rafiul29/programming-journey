<?php


$vegetables = ' Bringal, Potato, Tomato, Onion, Cabbage, Cauliflower, Carrot, Radish, Spinach, Lettuce ';
//

$vegetableArray = explode(', ', $vegetables); // Convert string to array to delimited by comma and space

// $vegetableString = join(', ', $vegetableArray); // Convert array back to string with comma and space as delimiter

$vegetableString1 = implode(', ', $vegetableArray); // Convert array back to string with comma and space as delimiter

var_dump($vegetableString1); // Display the array structure

// echo $vegetableArray[0] . "\n"; // Access the first element


// multiple delimeter pass 
$vegetables1 = ' Bringal, Potato; Tomato, Onion; Cabbage, Cauliflower; Carrot, Radish;Spinach,Lettuce ';

$vegetableArray1 = preg_split('/(, |,|; )/', $vegetables1); // Split string by comma or semicolon followed by optional space
var_dump($vegetableArray1); // Display the array structure