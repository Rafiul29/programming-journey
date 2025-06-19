# https://codeforces.com/problemset/problem/486/A



n = int(input(""))
res=0
if n%2==0:
  res=n//2
else:
  res=((n+1)//2)*(-1)
print(res)