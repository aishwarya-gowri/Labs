f1 = open("/home/bmsce/Desktop/file1", "w")
f1.write("Welcome to BMSCE")
f1.close()

f2 = open("/home/bmsce/Desktop/file2", "w")
f2.write("What is your name")
f2.close()

f=open("/home/bmsce/Desktop/file3","w")
f1=open("/home/bmsce/Desktop/file1","r")
f2=open("/home/bmsce/Desktop/file2","r")


con1=f1.readline()
con2=f2.readline()
x=con1.split(" ")
y=con2.split(" ")

if(len(x)>len(y)):
    length=len(x)
else:
    length=len(y)

x[0]=x[0]+" "
y[0]=y[0]+" "
#print(x[0])
str=" "
for i in range(length):
    if(i>len(x)-1):
        n1=0
    else:
        n1=len(x[i])//2
        str1=x[i]
    if(i>len(y)-1):
        n2=0
    else:
        n2=len(y[i])//2
        str2=y[i]
    for i in range(n1):
        str=str+str1[i]
    for i in range(n2):
        str=str+str2[i]
    str+=" "
f.write(str)
f.close()
with open("/home/bmsce/Desktop/file3","r")as f3:
    cont=f3.readline()
    print(cont)
    
    

    
