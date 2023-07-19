// Know performance of a task
let startTime=performance.now();
for(let i=0;i<=10;i++){
  console.log(i)
}

let endTime=performance.now();
console.log(endTime-startTime) //milliseconds