<?php
  $data=[1,2,3,4,5,6,7,8];
  for($i=0;$i<count($data);$i++){
    echo $data[$i].'';
  }

  // array associative
$information=[
    "name" => "rafiul",
    "age" => "34324",
    "department" => "CSE",
];

  echo $information['name'].' ';
  echo $information['age'].' ';

  foreach($information as $key=>$value){
    echo $key." => ".$value.'  '; ;
  }





echo "\n";

$students=array('rahim','karim','abul','babul');

echo count($students)."\n"; // Count the number of elements in the array
// echo $students[0].' ';

$n=count($students); // Get the number of elements in the array
for($i=0;$i<$n;$i++){
    echo $students[$i]."\n";
}

for($i=$n-1;$i>=0;$i--){
  echo $students[$i]."\n";
}