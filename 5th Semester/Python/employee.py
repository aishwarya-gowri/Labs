import sqlite3
 
from sqlite3 import Error
 
def sql_connection():
 
    try:
 
        con = sqlite3.connect('mydatabase.db')
 
        return con
 
    except Error:
 
        print(Error)
 
def create_table(con):
 
    cursorObj = con.cursor()
 
    cursorObj.execute("CREATE TABLE employees(id integer PRIMARY KEY, name text, salary real, dept text)")

    print("Table Created")
 
    con.commit()

def insert_table(con):

    cursorObj = con.cursor()
    name=input("Enter name:")
    emp_id=int(input("Enter the id:"))
    salary=input("Enter the salary")
    dept=input("Enter thge dept:")
    
    #cursorObj.execute("INSERT INTO employees VALUES(1, 'John', 700, 'HR')")

    #cursorObj.execute("INSERT INTO employees VALUES(2, 'Joe', 800, 'IT')")

    li=(emp_id,name,salary,dept)

    cursorObj.execute('INSERT INTO employees VALUES(?,?,?,?)',li)    

    print("Rows added")
 
    con.commit()

def update_table(con):
 
    cursorObj = con.cursor()
 
    #cursorObj.execute('UPDATE employees SET name = "Rogers" where id = 2')
    field="name"
    name="Bob"
    emp_id=int("4")
    data=(name,emp_id)
    try:
        cursorObj.execute('UPDATE employees SET name=? where id=?',data)
    except sqlite3.OperationalError:
        pass         

    print("Rows updated")
 
    con.commit()

def retrieve_table(con):

    cursorObj = con.cursor()

    cursorObj.execute("SELECT * FROM employees")

    rows=cursorObj.fetchall()

    print("Data:")
    
    for row in rows:
        print(row)

    emp_id=input("Enter the id of the employee DATA  to be fetched:")
    
    cursorObj.execute("SELECT * FROM employees where id=?",emp_id)

    rows=cursorObj.fetchall()

    print("Data:")
    
    for row in rows:
        print(row)

def delete_row(con):

    emp_id=input("Enter the id of the employee DATA to be deleted:")

    cursorObj = con.cursor()
    
    cursorObj.execute("delete FROM employees where id=?",emp_id)

    rows=cursorObj.fetchall()

    print("Data:")
    
    for row in rows:
        print(row)

    
    
con = sql_connection()
 
create_table(con)

insert_table(con)

update_table(con)

delete_row(con)

retrieve_table(con)

