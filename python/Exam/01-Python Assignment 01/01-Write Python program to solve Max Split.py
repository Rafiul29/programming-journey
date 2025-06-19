s = input()

count_l = 0
count_r = 0
result = []

for char in s:
    if char == 'L':
        count_l += 1
    else:
        count_r += 1
    
    if count_l == count_r:
        result.append(s[:count_l+count_r])
        s = s[count_l+count_r:]
        count_l = 0
        count_r = 0

print(len(result))
for string in result:
    print(string)



str='2131'
print(str[1:3])
print(str)








# def split_balanced_string(s):
#     count_l = 0
#     count_r = 0
#     result = []

#     for char in s:
#         if char == 'L':
#             count_l += 1
#         else:
#             count_r += 1
        
#         if count_l == count_r:
#             result.append(s[:count_l+count_r])
#             s = s[count_l+count_r:]
#             count_l = 0
#             count_r = 0
    
#     return result

# # Main function to read input and print output
# def main():
#     s = input()
#     print(s)
#     balanced_strings = split_balanced_string(s)
    
#     print(len(balanced_strings))
#     for string in balanced_strings:
#         print(string)

# if __name__ == "__main__":
#     main()
