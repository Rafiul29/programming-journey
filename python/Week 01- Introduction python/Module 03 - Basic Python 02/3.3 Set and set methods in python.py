nums=[1,1,1,1,3,3,3,4,3,3,3,23,2,23,]
print(nums)

nums_set=set(nums)
nums_set.add(434)
nums_set.remove(1)

print(nums_set)

for num in nums_set:
    print(num)

a={1,2,3.7}
b={1,2,3,4,5}
print(a&b)

print(a | b)
print(a-b)
print(b-a)