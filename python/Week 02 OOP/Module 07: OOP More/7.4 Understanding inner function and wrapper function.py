# function is a first class object

def double_decker():
  print("Start the double function")
  def inner_fun():
    print("inside the inner")
    return 400
  return inner_fun

# double_decker()
# double_decker()()
# print( double_decker()())

def do_something(work):
  print('work started')
  work()
  print('work end')

# do_something(2)

def coding():
  print("coding in python")

do_something(coding)

def sleeping():
  print("sleeping on")

do_something(sleeping)
