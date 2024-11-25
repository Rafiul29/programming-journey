<?php
  $data=[1,2,3,4,5,6,7,8];
  for($i=0;$i<count($data);$i++){
    echo $data[$i].'<br>';
  }

  // array associative
$information=[
    "name" => "rafiul",
    "age" => "34324",
    "department" => "CSE",
];

  echo $information['name'].'<br>';
  echo $information['age'].'<br>';

  foreach($information as $key=>$value){
    echo $key." => ".$value."<br>" ;
  }