<?php

class Vehicle{
    public $brand; // can be access from anywhere
    protected $model; // can only be accessed within the class and its subclass
    private $engineNumber;

    public function setBrand($brand){
      $this->brand=$brand;
    }

    public function getBrand(){
      return $this->brand;
    }

    protected function setModel($model){
      $this->model=$model;
    }

    protected function getModel(){
      echo "car model ";
      return $this->model;
    }

    public function registerModel($model){
      $this->setModel($model);
      echo "vegicle model ".$this->getModel();
    }

    private function setEngineNumber($engineNumber){
      $this->engineNumber=$engineNumber;
    }
    
    private function getEngineNumber() {
      return $this->engineNumber;
    }


    public function registerVehicle($engineNumber) {
      $this->setEngineNumber($engineNumber);
      echo "Vehicle registered with engine number: " . $this->getEngineNumber();
  }
}

class Car extends Vehicle{
  public function demo(){
    echo "car model ".$this->getModel();
    // echo "car model ".$this->getEngineNumber();

  }
}


$vehicle= new Vehicle();
$vehicle->registerModel("Corrola");

// $car->setModel('Corolla'); // error
// echo $car->getModel();

$vehicle->registerVehicle('21312312312');


$car = new Car;
// echo $car->demo(); // can't work because  getEngineNumber private method

$car->demo();










// abstract class Vehicle{
//   public $companyName;
//   public function __construct($companyName){
//     $this->companyName=$companyName;
//   }
//   abstract public function intro();
// }

//  echo Vehicle::$companyName;