class Student:
  def __init__(self,name,current_class,id):
    self.name=name
    self.id=id
    self.current_class=current_class
  
  def __repr__(self) -> str:
    return f'Student with name: {self.name}, class:{self.current_class}, id: {self.id}'

class Teacher:
  def __init__(self,name,subject,id) -> None:
    self.name=name
    self.subject=subject
    self.id=id

  def __repr__(self) -> str:
    return f'Teacher: {self.name}, subject {self.subject}'


class School:
  
  def __init__(self,name) -> None:
    self.name=name
    self.teachers=[]
    self.students=[]

  def add_teacher(self,name,subject):
    id=len(self.teachers)+101
    teacher=Teacher(name,subject,id)
    self.teachers.append(teacher)
  
  def enroll(self,name,fee):
    if fee<500:
      return 'not enough fee'
    else:
      id=len(self.students)+1
      student=Student(name,'C',id)
      self.students.append(student)
      return f'{name} is enrolled with id {id} ,extra mone {fee-6500}'
  
  def __repr__(self):
    print('welcome to ',self.name)
    print("----- our teachers ----")
    for teacher in self.teachers:
      print(teacher)
    print("----- our Students ----")
    for student in self.students:
      print(student)
    return "All done"



phitron=School('Phitron')
phitron.enroll('rafi',342342)
phitron.enroll("qwde",32341)

phitron.add_teacher("micale",'Data Structure')
print(phitron)
