# MongoDB

## Student Database

### Perform the following  DB operations using MongoDB. 

1. Create a database “Student” with the following attributes  Rollno, Age, ContactNo, Email-Id.
2. Insert appropriate values
![student collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/student/Images/create%20and%20insert%20into%20student%20collection.png)

3. Write query to update Email-Id of a student with rollno 10.
![update email using usn](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/student/Images/update%20using%20usn%20only.png)

4. Replace the student name from “ABC” to “FEM” of rollno 11.
![update name using name and usn](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/student/Images/update%20using%20name%20and%20usn.png)

5. Export the created table into local file system
![export tabel](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/student/Images/student%20export%20collection.png)

6. Drop the table
####     db.stu.drop()
####     output: true

7. Import a given csv dataset from local file system into mongodb collection. 
![import collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/student/Images/student%20import%20collection.png)


## Customer Database
1. Create  a collection by name Customers with the following attributes.
 Cust_id, Acc_Bal, Acc_Type
2. Insert at least 5  values into the table
![creation of the collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/customer/Output/create%20and%20insert%20into%20customers%20collection.png)

3. Write a query to display those records whose total account balance is greater than 
    10000 of  account type ‘Z’(fixed Account) for each customer_id.
![update ](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/customer/Output/update.png)

4. Determine Minimum and Maximum account balance for each customer_id.
![aggregate](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/customer/Output/max_min_each_customer.png)

5. Export the created collection into local file system
![export customer collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/customer/Output/export.png)

6. Drop the table
####    db.cutomer.drop()
####    output: true

7. Import a given csv dataset from local file system into mongodb collection.
![import into customer collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Lab3/student/Images/student%20import%20collection.png)
