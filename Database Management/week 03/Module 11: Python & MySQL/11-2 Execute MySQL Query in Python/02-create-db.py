import mysql.connector

mydbconnection=mysql.connector.connect(
  host="localhost",
  user='root',
  passwd='root'
)

# create database
db_name='python_test_db'
mycoursor = mydbconnection.cursor()

sql_query= "CREATE DATABASE " + db_name

mycoursor.execute(sql_query)


