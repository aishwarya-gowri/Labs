
1. Create  a keyspace by name Student:

> CREATE KEYSPACE Student with replication = {'class': 'SimpleStrategy', 'replication_factor': 1};

2. Create a column family by name Student-Info with attributes Student_Id Primary Key, Stude_Name, Date_of_Joining, Semester, Dept_Name:

> USE student ;
> CREATE COLUMNFAMILY studentInfo(
  studentID INT PRIMARY KEY,
  name TEXT, 
  dateOFJoining DATE,
  semester INT,
  departmentName TEXT);

3. Insert the values into the table in batch:

> BEGIN BATCH
 INSERT INTO studentInfo (studentID, name,dateOfJoining,semester,departmentName)VALUES(124,'Bhoomika','2017-07-23',7,'CSE');
INSERT INTO studentInfo (studentID, name,dateOfJoining,semester,departmentName)VALUES(123,'Kusuma','2017-07-22',7,'CSE');
INSERT INTO studentInfo (studentID, name,dateOfJoining,semester,departmentName)VALUES(121,'Aishwarya','2017-07-21',7,'CSE');
APPLY BATCH ;

4. Update Student name  of Student_Id 121:

>UPDATE studentInfo SET name='xyz' WHERE studentId=124;
