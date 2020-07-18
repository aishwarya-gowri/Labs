n=int(input("Enter the number of elements required in the series:"))
def fib(n):
    if(n<=1):
        return n
    else:
        return (fib(n-1)+fib(n-2))

for i in range(n):
    print(fib(i)," ",end=" ")

