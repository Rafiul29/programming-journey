<?php

class A{
  public $name,$age;
  public function __construct($name,$age){
    $this->name=$name;
    $this->age=$age;
  }
  static public function person($name,$age){
    echo "Your name is $name and $age years old ";
  }
}

// $obj=new A('rafiul',3413241341);
// $obj->person();
A::person('rafiul', '21');