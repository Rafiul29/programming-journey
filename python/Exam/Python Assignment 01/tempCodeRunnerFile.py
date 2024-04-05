a = [int(x) for x in input().split()]
removal_cnt = 0

for num in set(a):
    cnt = a.count(num)  
    if cnt==num:
        continue
    elif cnt > num:
        removal_cnt += cnt - num
    elif cnt<num:
        removal_cnt+=cnt
print(removal_cnt)
