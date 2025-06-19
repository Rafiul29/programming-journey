
// 1

// console.log(1)
// setTimeout(()=>{console.log(2)},1000)
// setTimeout(()=>{console.log(3)},0)
// console.log(4)


// 2

// function fun(){
//   setTimeout(()=>{
//     console.log(a)
//   },2000)
//   var a=100;
// }

// fun()

// console.log(this)


// let arr=[1,2,4,5]
// let obj={...arr}
// console.log(obj)

// let obj1={'1':1,'2':2}
// let arr2=[...obj1] // type error obj1 is not iterable
// console.log(arr2)


// const promise=new Promise(res=>res(2))

// promise.then((v)=>{
//   console.log(v)
//   return v*2
// })
// .then(v=>{
//   console.log(v)
//   return v*2
// })
// .finally(v=>{
//   console.log(v)
//   return 0
// })
// .then(v=>{
//   console.log(v)
  
// })


const arr=[1,2,3,100]
arr.foo='hi'
for(let i in arr){
  console.log(i)
}


for(let i of arr){
  console.log(i)
}

console.log('A'-"B")