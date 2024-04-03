
try:
  res=3/1
except:
    print("error occoured")
finally:
   print("done")


#file write
with open('1.text','w') as file:
   file.write('i love u python!')

#append file
with open('1.text','a') as file:
   file.write('i love u python!')

#file read
with open('1.text','r') as file:
   print(file.read())