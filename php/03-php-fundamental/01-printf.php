<?php

$fname='rafiul';
$lname='islam';

printf("His name %s %s\n",$fname,$lname);
printf('His name is %2$s %1$s',$lname,$fname); // argument
echo "\n";


printf('The binary equvalent of %1$d is %1$b',3);
echo "\n";

$n=42.236;
printf("%.2f\n",$n);

$m=122.1321;
$n=21.21;

// printf("%05d\n",$m);
// printf("%05d\n",$n);


printf("%07.2f\n",$m);
printf("%07.2f\n",$n);