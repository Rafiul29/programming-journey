<?php

// parent class  or super class  or base class
class A{
  public $name,$age;
  public  function __construct($name,$age){
    $this->name=$name;
    $this->age=$age;
    echo 'run constructor <br>';
  }
  public function demoA(){
    echo "hello class A  your name is $this->name and age $this->age <br>";
  }
  
  public function __destruct(){
    echo 'run desstructor <br>';
  }
}

// child class or subclass
class B extends A{
  public  function __construct($name,$age){
    $this->name=$name;
    $this->age=$age;
  }
  public function demoB(){
    echo "hello class A  your name is $this->name and age $this->age <br>";
  }
}

$object1 = new B('rafiul1',31);
$object1->demoA();
// $object1->demoB();

