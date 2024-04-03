def fun():
    return 3,4
# print(fun())

things='pen','tripod','charger','phone'
# print(things)

# slice
# print(things[0])
# print(things[-1])
# print(things[::-1])

if 'phone' in things:
    print('exist')
print(len(things))

mega=([1,2,3,4],[5,6,7,8])
# print(type(mega))
print(mega[0])
# update
mega[0][1]=232312
print(mega)