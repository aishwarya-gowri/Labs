str=input("Enter the string:")
x=[]
f=0
for i in str:
    if i=='(' or i=='{' or i=='[':
        x.append(i);
    else:
        p=x.pop()
        if (i==')' and p!='(') or(i=='}' and p!='{') or(i==']' and p!='['):
            f=1
            break
if f==0:
    print("Valid")
else:
    print("Invalid")
