function odd_even_product( my_list ) {
  //Insert your code here 
  let multiply=1
  for(let i=0;i<my_list.length;i++){
       multiply= multiply * my_list[i];
  }
  let sum =0
  if(multiply%2==0){
    for(let i=0;i<my_list.length;i++){
       sum+=my_list[i];
  }
  return sum
  }

 return sum
}

console.log(odd_even_product([5,7,9]))