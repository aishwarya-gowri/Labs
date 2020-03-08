li=[]
new_li=[]
n=int(input("Enter the size of the list:"))
for i in range(0,n):
    x=int(input("enter: "))
    li.append(x)
    if(x%2==0):
        new_li.append(x)

for i in new_li:
    print(i," ",end="")
        
    
