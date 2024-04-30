
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
          UPDATE Student
          SET NAME="MRIR"
          where Roll='101'
          """
mycoursor.execute(sql_query)
mydbconnection.commit()
print("Update student data successfull")



