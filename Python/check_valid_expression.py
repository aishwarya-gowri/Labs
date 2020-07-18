str=input("Enter the string:")
x=[]
op=[]
f=0
for i in str:
    if i=='(' or i=='{' or i=='[':
        x.append(i);
    elif i==')' or i=='}' or i==']':
        try:
            p=x.pop()
            if (i==')' and p!='(') or(i=='}' and p!='{') or(i==']' and p!='['):
                f=1
                break
        except IndexError:
            f=1
            break
        
    #print(x)
if f==0:
    print("Valid")
else:
    print("Invalid")
