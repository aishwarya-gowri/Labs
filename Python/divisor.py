var=int(input("Enter a number:"))
x=int(var/2)+1
for i in range(1,x):
    if var%i==0:
        print(i,end=" ")
print(var)
