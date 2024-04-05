# belief = "the world is mine, hello"[::-1]
# print(belief)

str=input().split()
ansStr=[]
for text in str:
    ansStr.append(text[::-1])

print(" ".join(ansStr))

