def bs(a,b,e,k):
    while(b<=e):
        m=int((b+e)/2)
        if(a[m]==k):
            return True
        elif(a[m]>k):
            e=m-1
        else:
            b=m+1
    return False 
    

n=int(input("Enter the size:"))
a=[]
for i in range(0,n):
    x=int(input("Enter the number:"))
    a.append(x)
for i in range(0,n):
        print(a[i],end=" ")
print(" ")
k=int(input("Enter the element to be found:"))
print(bs(a,0,n-1,k))
