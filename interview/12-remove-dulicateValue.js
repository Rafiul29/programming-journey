
// remove duplicate from array

const array=[1,2,1,2,3,4,3,4,5,6,5,6,5,7];

const removeDuplicateValue=[... new Set(array)]
console.log(removeDuplicateValue)

let remove=array.filter((el,i)=>i===array.indexOf(el))
console.log(remove)