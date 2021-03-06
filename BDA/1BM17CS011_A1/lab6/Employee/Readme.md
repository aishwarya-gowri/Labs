
# Cassandra
### Perform the following  DB operations using Cassandra. 

1. Create  a keyspace by name Employee
>CREATE KEYSPACE Employee WITH REPLICATION={'class':'SimpleStrategy','replication_factor':1};

2. Create a column family by name Employee-Info with attributes 
    Emp_Id Primary Key, Emp_Name, Designation, Date_of_Joining, Salary,   
    Dept_Name
> CREATE TABLE Employee_Info (Emp_Id int,Emp_name text,Designation text,DateOfJoining timestamp,Salary double,Department text, PRIMARY KEY(Emp_Id));

3. Insert the values into the table in batch
> BEGIN BATCH
            ... INSERT INTO Employee_Info(Emp_Id,Emp_name,Designation,DateOfJoining,Salary,Department)VALUES(121,'Kusuma','ASE','2020-03-12',1800000,'CMR')
            ...  INSERT INTO Employee_Info(Emp_Id,Emp_name,Designation,DateOfJoining,Salary,Department)VALUES(122,'Bhoomika','Analyst','2020-03-12',1600000,'IT')
            ... INSERT INTO Employee_Info(Emp_Id,Emp_name,Designation,DateOfJoining,Salary,Department)VALUES(123,'Aishwarya','SDE','2021-07-01',1500000,'Development')
            INSERT INTO Employee_Info(Emp_Id,Emp_name,Designation,DateOfJoining,Salary,Department)VALUES(124,'Lavanya','SE','2021-09-6',1200000,'Development')
            ... INSERT INTO Employee_Info(Emp_Id,Emp_name,Designation,DateOfJoining,Salary,Department)VALUES(125,'Lakshmi','Talent Aquisition','2021-03-5',1200000,'HR')
            ... APPLY BATCH;
      
![screenshot1](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/lab6/Employee/Output/insert.png)

            
4.  Update Employee name and Department of Emp-Id 123

>UPDATE Employee_Info SET Emp_name='Aishwarya Gowri E S' WHERE Emp_id=123;
![screenshot2](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/lab6/Employee/Output/update.png)


5. Alter the schema of the table Employee_Info to add a column Projects which stores a set of Projects done by the corresponding Employee.

> ALTER TABLE Employee_Info ADD Projects set< text>;

6. Update the altered table to add project names.

>Update Employee_Info SET Projects=Projects+{'Max-Min Simulation,Brainvita'} WHERE Emp_id=123;
![screenshot3](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/lab6/Employee/Output/alter%20table.png)

7.Create a TTL of 15 seconds to display the values of Employees.

>INSERT INTO Employee_Info(Emp_Id,Emp_name,Designation,DateOfJoining,Salary,Department)VALUES(129,'Ram','SE','2021-09-6',1200000,'Development')USING TTL 30;
>SELECT salary FROM Employee_Info WHERE Emp_id=129;
