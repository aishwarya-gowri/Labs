rows=int(input("Enter the number of rows:"))
for i in range(rows//2):
    for i in range(rows):
        print("-",end="")
    print(" ")
    print("||||")
if(rows%2!=0):
     for i in range(rows):
        print("-",end="")
