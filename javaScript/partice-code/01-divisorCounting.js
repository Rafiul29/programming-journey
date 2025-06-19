
const start=performance.now()

function divisorCounting(n){

  let  divisorCount=2
    for(let i=2;i<=Math.ceil(Math.sqrt(n));i++){
      if(n%i==0){
        divisorCount++
        if(n/i!==i){
          n%(n/i)
          divisorCount++
        }
      }
    }
  return divisorCount
}

console.log(divisorCounting(77))

const end=performance.now()

console.log(end-start)