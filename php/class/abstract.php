<?php

abstract class Car{
  public $name;
  public function __construct($name) {
    $this->name = $name;
  }
  abstract public function intro(); 
}


class Audi extends Car{
  public function intro(){
    return 'Choose the car '.$this->name;
  }
}

$audi = new Audi('Audi');
echo $audi->intro();