<?php
// $x=5; // global varible
// function demo($name='qd',$age='13'){
//   $y=34; // local scope
//   return  "My name is ".$name." and you age is ".$age;
// }
// echo $x;

// echo demo()."\n";
  

// global Keyword

// $x=5;
// $y=10;

// function add(){
//   global $x,$y;
//   return $x+$y;
// }

// echo add()."\n";

// static keyword
function staticKeyword(){
  static $x=0;
  echo $x;
  $x++;
}

staticKeyword();
staticKeyword();
staticKeyword();

