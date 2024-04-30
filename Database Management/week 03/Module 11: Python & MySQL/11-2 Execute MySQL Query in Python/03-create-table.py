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
          CREATE TABLE Student
          (
          Roll varchar(4),
          Name varchar(50)
          )
          """
mycoursor.execute(sql_query)
print("Create table successfull")



