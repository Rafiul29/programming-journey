<?php
//  require_once '../connection.php';

class student{
  protected function connection(){
    $hostName='localhost';
    $userName='root';
    $password='';
    $dbName='php_crud_operation';
    
    $link=mysqli_connect($hostName,$userName,$password,$dbName);
      // if($link){
      //   echo 'success';
      // }
    return $link;
  } 

  
   //store student info
   public function storeStudentInfo($data){
    // echo '<pre>';
    // print_r($data);
    $name = $data['name'];
    $email = $data['email'];
    $phone = $data['phone'];

    $query = "INSERT INTO students (name, email, phone) VALUES ('$name', '$email', '$phone')";



      // Prepare the statement
      $stmt = mysqli_prepare($this->connection(), $query);
          
      // Check if the statement was prepared correctly
      if ($stmt === false) {
        die('MySQL prepare error: ' . mysqli_error($this->connection()));
      }

      // Bind parameters to the statement (ss - two strings)
      mysqli_stmt_bind_param($stmt, "sss", $name, $email, $phone);
      
      // Execute the query
      if (mysqli_stmt_execute($stmt)) {
        echo "Data saved successfully";
      } else {
        echo "Error: " . mysqli_stmt_error($stmt);
      }
}//end method


}

?>