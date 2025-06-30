
<?php
function printNumber($counter,$end,$steping){
  if($counter>$end){
    return;
  }

  echo $counter."\n";
  $counter +=$steping;
  printNumber($counter,$end,$steping);
}

printNumber(4,20,3);