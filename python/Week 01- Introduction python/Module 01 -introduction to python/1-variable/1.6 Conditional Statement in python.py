# in, not , not in, is , is not

a=7
if a >5:
    print("5 is greather than")
else:
    print("5 is less than")

boss=False

if boss is not True:
    print("YES")
else:
    print("NO")


#nested condition

boss=False
coin='head'
if boss!=True:
    print("yEs boss")
    if coin=='tail':
        print("boos tail")
    else:
        print("boos head")
else:
    print("No boss")