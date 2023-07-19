var reverseWords = function(s) {
    let str=s.split(" ")
    for(let i=0;i<str.length;i++){
      str[i]=str[i].split("").reverse().join("")
    }
    return str.join(" ")
};
console.log(reverseWords("God Ding"))