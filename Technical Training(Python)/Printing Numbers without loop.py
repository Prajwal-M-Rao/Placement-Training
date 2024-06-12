n=int(input("Enter a number :"))

def fun(n):
    if n>0:
        fun(n-1)
        print(n)
fun(n)