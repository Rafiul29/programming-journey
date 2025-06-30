<?php
 $n=322;

 if($n%2==0){
  echo "$n is  even number \n";
 }else{
  echo "$n is  odd number \n";
 }


 if($n>10){
  echo "$n is grater than 10 \n";
 }

//  logical operator
/*
==
!=
+=
-=
*/

$result = $n%2==0? "{$n} is EVEN \n":"{$n} is ODD \n";
echo $result;