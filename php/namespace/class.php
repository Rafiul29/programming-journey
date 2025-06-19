<?php
require_once 'class1.php';
require_once 'class2.php';

$object = new class1\a1\A;
$object->demo1();

$object1 = new class2\a2\A;
$object1->demo2();

// 
// abstract class Vehicle{
//   public $companyName;
//   public function __construct($companyName){
//     $this->companyName=$companyName;
//   }
//   abstract public function intro();
// }

//  echo Vehicle::$companyName;