import mysql.connector

db_name="python_test_db"

mydbconnection=mysql.connector.connect(
  host="localhost",
  user='root',
  passwd='root',
  database=db_name
)

# create database
mycoursor = mydbconnection.cursor()

sql_query= """
          INSERT INTO Student(Roll,Name)
          VALUES('101','Md Rafiul islam')
          """
mycoursor.execute(sql_query)
mydbconnection.commit()
print("Insert student data successfull")



