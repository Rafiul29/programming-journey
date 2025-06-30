<?php

// array is not imutable
// it can be modified
// it can be modified by reference

$data = [1, 2, 3, 4, 5, 6, 7, 8];

$data[0] = 10; // Modify the first element


// array_shift() // Remove the first element
// array_pop($data); // Remove the last element
// array_unshift($data, 0); // Add an element at the beginning
// array_push($data, 9); // Add an element at the end

// echo array_pop($data) . ' '; // Remove and return the first element
// echo array_push($data, 9) . ' '; // Add an element at the end

echo array_shift($data) . "\n"; // Remove and return the first element

//  echo array_unshift($data, 0) . "\n"; // Add an element at the beginning

for($i = 0; $i < count($data); $i++) {
    echo $data[$i] . ' ';
}   
