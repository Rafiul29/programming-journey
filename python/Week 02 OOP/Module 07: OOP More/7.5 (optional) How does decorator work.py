# def timer(fun):
#   def inner():
#     print("time started")
#     fun()
#     print("time ended")
#   return inner

# # timer()()
# @timer
# def get_factorial():
#   print("factorial started")

# get_factorial()

import math 
import time
def timer(func):
  def inner(*args ,**kwargs):
    print("time started")
    start=time.time()
    func(*args,**kwargs)
    end=time.time()
    print("time ended")
    print(f'total time taken {end-start}')
  return inner

@timer
def get_factorial(n):
  print("factorial started")
  result=math.factorial(n)
  print(result)

get_factorial(n=3)