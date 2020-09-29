# MongoDb

## Company Database


### 1. Create Company database with following collections
1. Employee
2. Department

![DataBase Creation Screenshot](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/create%20company%20Datasbase.png)
 

### Perform following MongoDB Operations

#### 1. Insert at least five documents in each collection using all three methods of insertion.{ Show  dbupdate method using upsert set to true and set to false}

###### Employee Collection
![employee collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/Employee%20collection.png)

###### Department Collection
![department Collection](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/Department%20collection.png)

#### 2. Update "Employee" collection  to add new field to an existing document.

##### Added Age Field
![update screenshot](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/add%20new%20field%20using%20update.png)

##### After Update
![database after update](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/database%20modification%20after%20adding%20new%20field.png)

#### 3. Remove a field from an existing document

##### Removing a field
![database after removing field](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/remove%20field.png)

##### Before update
![before deletion of dept field](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/before%20deletion.png)

##### After Update
![after deletion](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/after%20deletion.png)


#### 4. Select all documents from  both collections.

##### a)Select all documents such that they appear to be in one collection

![Aggregate](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/display%20all%20collections%20using%20aggregate.png)

##### b)Display all collections seperately using find

###### Employee DataBase
### db.employee.find()
![employee](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/employee%20database2.png)

###### Department DataBase
### db.department.find()
![dept](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/Department%20database.png)

#### 5. Select only employee name and department number whose department number falls between 1 to 5

##### Query & Output
![in operator](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/employees%20who%20are%20particular%20departments.png)

#### 6. Select employee documents whose  name begins with 'A'

##### Query & Output
![start from A](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/all%20names%20starting%20from%20'A'.png)
#### 7. Select employee document s whose age is greater than 25

##### Query & Output
![age greater than 25](https://github.com/aishwarya-gowri/Labs/blob/master/BDA/1BM17CS011_A1/Company%20Database/Images/age%20greater%20than%2025.png)
