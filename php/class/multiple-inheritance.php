<?php

trait A{
   public function demoA(){
    echo "Welcome to demo A <br>";
  }
}

trait B{
  public function demoB(){
    echo "Welcome to demo B <br>";
  }
}

class C{
  use A,B;
  public function demoC(){
    echo "Welcome to demo C <br>";
  }
}

$obj = new C();
$obj->demoA();
$obj->demoB();
$obj->demoC();




