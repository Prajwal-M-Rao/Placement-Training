n=int(input("Enter a number "))
a=0
if n>=1 and n<=1000000000:
    for i in range(1,n+1):
        a+=i
    print(a)
else:
    print("Only +ve numbers")