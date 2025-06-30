<?php
$n= 13;

if($n%2==0):
  echo "Even Number";
  echo PHP_EOL;
  echo "Some text";

elseif (true):

else:
  echo "Odd Number";
  echo PHP_EOL;
  echo "Some text++";

endif;
echo PHP_EOL;



switch($n%2==0):
  case 0:
    echo "EVEN Number";
    break;
  case 1:
    echo 'Odd number';
    break;
  default:
    echo 'Noting';
endswitch;




