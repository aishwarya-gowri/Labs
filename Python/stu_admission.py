class stu_admission:
    def __init__(self):
        self.s_id=0
        self.age=0
        self.marks=0
    def valid(self):
        if (self.age>20) and (self.marks>-1 or self.marks<101):
            return True
        return False
    def qualify(self):
        if self.marks>=65:
                return True
        return False
    def set(self,s_id,age,marks):
        self.s_id=s_id
        self.age=age
        self.marks=marks
    def get(self):
        print("id:",self.s_id)
        print("age:",self.age)
        print("marks:",self.marks)
students=[]
x=int(input("Enter the number of students:"))
for i in range(0,x):
    print("\nFor student",i,":")
    sid=input("Enter id:")
    age=int(input("Enter age:"))
    marks=int(input("Enter marks:"))
    students.append(stu_admission())
    students[i].set(sid,age,marks)

for i in range(0,x):
    print("\nstudent",i," details:")
    students[i].get()
    x=students[i].qualify() and students[i].valid()
    if(x):
        print("student",i,"admitted")
    else:
        print("student",i,"not admitted")
    
