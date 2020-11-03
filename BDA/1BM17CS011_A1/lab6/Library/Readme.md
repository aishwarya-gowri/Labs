1.Create  a keyspace by name Library

>CREATE KEYSPACE Library WITH REPLICATION={'class':'SimpleStrategy','replication_factor':1};

     2. Create a column family by name Library-Info with attributes 
     Stud_Id Primary Key,
     Counter_value of type Counter,
    Stud_Name, Book-Name, Book-Id, Date_of_issue

>CREATE TABLE Library_Info(Stud_Id int,Stud_name text,Book_name text, Book_Id text,Date_of_issue timestamp,Counter_value Counter,PRIMARY KEY(Stud_id,Stud_name,Book_name,Book_Id,Date_of_issue));

3. Insert the values into the table in batch

>UPDATE library_info SET counter_value = counter_value+1 WHERE stud_id=112 and stud_name='Aishwarya' and book_name='BDA' and book_id='1' and date_of_issue='2018-07-23';
 UPDATE library_info SET counter_value = counter_value+1 WHERE stud_id=113 and stud_name='Kusuma' and book_name='DSR' and book_id='2' and date_of_issue='2018-07-23';
cqlsh:library> select * from library_info;

3.  Display the details of the table created and increase the value of the counter 

>select * from library_info;

4. Write a query to show that a student with id 112 has taken a book “BDA” 2 times.

>select * from library_info where stud_id=112;

5. Export the created column to a csv file

>COPY Library_Info(Stud_Id,Stud_name,Book_name,Book_Id,Date_of_issue,Counter_value) to 'D:\Classes\Library_Info.csv'

6. Import a given csv dataset from local file system into Cassandra column family

> COPY Library_Info(Stud_Id,Stud_name,Book_name,Book_Id,Date_of_issue,Counter_value) FROM 'D:\Classes\Library_Info.csv'
