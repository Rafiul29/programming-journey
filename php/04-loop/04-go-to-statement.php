<?php
$i=0;
a: $i++;
echo $i.PHP_EOL;
if($i<10) goto a;

for($i=1,$j=10;$i< 10;$i++,$j--){
  echo $i.".".$j.PHP_EOL;
}