<?php

function isEven($x){
  if($x%2==0){
    return true;
  }
  return false;
}


function sum(int $x=0,int $y=0,int $z=0):int{
  return $x+$y+$z;
}

echo sum(1,2,3)."\n";


//  unlimited parameter 
function sum2(int ...$nums):int{
  $result =0;
  for($i=0;$i<count($nums);$i++){
    $result+=$nums[$i];
    // echo $nums[$i]."\n";
  }
  return $result;
}

echo sum2(1,2,3,3,5,6,5)."\n";
