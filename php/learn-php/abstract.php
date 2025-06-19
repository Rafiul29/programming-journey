<?php

// without body
interface Animal{
   public function makeSound(); 
}


interface Animal2{
  public function makeSound2();
}

class Cat implements Animal,Animal2{

  public function makeSound(){
    echo ' Meow ';
  }
  public function makeSound2(){
    echo ' Meow 1 ';
  }
}

class Dog implements Animal{

  public function makeSound(){
    echo ' Bark ';
  }
}

class Mouse implements Animal{

  public function makeSound(){
    echo ' Squeak ';
  }
}

$cat=new Cat();
$dog=new Dog();
$mouse=new Mouse();

$animals= array($cat,$dog,$mouse);

foreach($animals as $animal ){
  $animal->makeSound();
}

$cat->makeSound2();