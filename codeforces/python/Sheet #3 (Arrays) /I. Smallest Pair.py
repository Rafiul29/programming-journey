from math import *

t = int(input())
idx = 0
while idx < t:
    n = int(input())
    arr = [int(x) for x in input().split()]
    res = float('inf')
    for i in range(0, n):
        for j in range(i + 1, n):
            sum_val = arr[i] + arr[j] + j - i
            res = min(res, sum_val)
    print(res)
    idx += 1
