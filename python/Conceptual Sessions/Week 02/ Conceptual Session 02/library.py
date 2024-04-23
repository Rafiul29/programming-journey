#Entities: book,User, Library
#Functionalities: adding user, adding book, brrow,return

class Book:
  def __init__(self,id,name,cat,quantity) -> None:
    self.id=id
    self.name=name
    self.cat=cat
    self.quantity=quantity

class User:
  def __init__(self,id,name,password) -> None:
    self.id=id
    self.name=name
    self.password=password
    self.borrowedBooks=[]

class Library:
  def __init__(self,owner,name,) -> None:
    self.owner=owner
    self.name=name
    self.books=[]
    self.users=[]

  def addBook(self,id,name,cat,quantity):
    book=Book(id,name,cat,quantity)
    self.books.append(book)

  def addUser(self,id,name,password):
    user=User(id,name,password)
    self.users.append(user)
    return user

  def borrowBook(self,user,id):
    for book in self.books:
      if book.id==id:
        if book in user.borrowedBooks:
          print("\n\tAlready Borrowed !")
          return
        elif book.quantity<1:
          print("\n\t No available copies")
          return
        else:
         user.borrowedBooks.append(book)
         book.quantity-=1
         print("\n\t{book.name} borrowed successfully")
         return
      print("\n\t Book not found !")



pl=Library("Rafiul Islam","Phitron Library")

admin=pl.addUser(1,'admin','admin')
rafi=pl.addUser(50,'rafi','2121')
pybook=pl.addBook("Sci-Fi",15,"Dune",4)

run=True
currentUser=None

while run:
  if currentUser==None:
    print("\n\t No logged in user !")
    option=input("Login ? Registration (L/R)")

    if option=="R":
      id=int(input("\tEnter id: "))
      name=input("\tEnter name")
      password=input("\tEnter password")
      user=pl.addUser(id,name,password)
      currentUser=user
    elif option=='L':
      id=int(input("\tEnter id: "))
      password=input("\tEnter password")

      match=False
      for user in pl.users:
        if user.id==id and user.password==password:
          currentUser=user
          match=True
          break
      if match==False:
        print("\n\tNo user found !")
  else:
    if currentUser.name=="admin":
      print("Options : \n")
      print("1 : Add Book")
      print("2 : Show Users")
      print("3 : Show Books")
      print("4 : Logout")
    ch=int(input("\nEnter Option"))
    if ch==1:
      # id,name,cat,quantity
      id=int(input("\tEnter id: "))
      name=input("\tEnter Name: ")
      id=input("\tEnter cat: ")
      quantity=input("\tEnter quantity: ")