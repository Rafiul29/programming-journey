const names=["Rafiul islam","Kamruzzaman Pavel","Shohel Rana Price"]
let  index =-1
let name=names[index++] 

setInterval(()=>{
  let name=names[index++] 
  console.log(name, name.length)
  if(index===names.length){
    index=0
  }
},1000)