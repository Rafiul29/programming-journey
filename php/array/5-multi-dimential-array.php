

<?php

$students =[
    'name'=> 'Rafiul',
    'age'=> 24,
    'department'=> 'CSE',
    'skills'=>  explode(', ', 'PHP, JavaScript, Python'),
    'isActive'=> true,          
];

array_push($students['skills'], 'HTML', 'CSS'); // Add new skills to the skills array

// print_r($students); // Display the array structure

echo $students['skills'][2] . "\n"; // Access the first skill