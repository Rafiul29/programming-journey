<?php
// constant variable
define('PI',3.141516);
$task="read";
echo $task;
echo "\n";
$task="write";
echo $task;
echo "Value of PI = ".PI;
echo "\n";
 
//echo constant("PI");

$constant='constant';
echo "Value of PI= {$constant("PI")}";

