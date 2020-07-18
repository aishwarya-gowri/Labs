str=input("Enter the string:")
print("Actual string:",str)
s=str.split(" ")
print("split string:",s)
c=len(s)

#print(c)
print("reversing words positions:")
while(c>0):
    c=c-1
    print(s[c],end=" ")
print(" ")
print("reversing letters in a sting:")
print(str[::-1])
print("reversing letters but not word position:")
for i in s:
    c=len(i)
    while(c>0):
        c=c-1
        print(i[c],end="")
    print(end=" ")
