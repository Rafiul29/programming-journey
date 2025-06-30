<?php


$students =[
    'name'=> 'Rafiul',
    'age'=> 24,
    'department'=> 'CSE',
    'skills'=> ['PHP', 'JavaScript', 'Python'],
    'address'=> [
        'city'=> 'Dhaka',
        'country'=> 'Bangladesh'
    ],
    'isActive'=> true,          
];


// echo $students['name']."\n"; // Accessing a simple key
echo count($students) . "\n"; // Count the number of elements in the associative array

// update value associative array
// $students['name']  = $students['name']." islam"; // Using null coalescing operator to provide a default value
$students['name'] .= " islam";


foreach($students as $key=>$value){
    if(is_array($value)) {
        echo "$key => " . implode(", ", $value) . "\n"; // Accessing array values
    } elseif(is_bool($value)) {
        echo "$key => " . ($value ? 'true' : 'false') . "\n"; // Accessing boolean values
    } elseif(is_array($value)) {
        echo "$key => " . json_encode($value) . "\n"; // Accessing nested arrays
    } else {
        echo "$key => $value\n"; // Accessing other types of values
    }
    // echo "$key => $value\n"; // Accessing all key-value pairs
}