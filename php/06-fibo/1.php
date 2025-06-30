<?php

function fibo($n) {
  if ($n == 0) return 0;
  if ($n == 1) return 1;
  return fibo($n - 1) + fibo($n - 2);
}

function printFiboSeries($n) {
  for ($i = 0; $i < $n; $i++) {
    echo fibo($i) . " ";
  }
}

printFiboSeries(10);



// $memo = [];

// function fibo($n) {
//   global $memo;
//   if ($n == 0) return 0;
//   if ($n == 1) return 1;
//   if (isset($memo[$n])) return $memo[$n];
//   return $memo[$n] = fibo($n - 1) + fibo($n - 2);
// }

// function printFiboSeries($n) {
//   for ($i = 0; $i < $n; $i++) {
//     echo fibo($i) . " ";
//   }
// }

printFiboSeries(10);  // Output: 0 1 1 2 3 5 8 13 21 34

$a = 0;
$b = 1;
for($i=0;$i<10;$i++){
  echo $a." ";
  $temp=$a+$b;
  $a=$b;
  $b=$temp;
}

echo '==========';
function fac($n){
  if($n==1) return 1;
  return $n*fac($n-1);
}

echo fac(3);