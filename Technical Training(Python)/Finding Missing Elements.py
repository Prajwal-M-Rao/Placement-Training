n=int(input("Enter value of n "))
arr=[]
if n>=1 and n<=1000000:
    print("Enter values")
    for i in range(n-1):
        num=int(input(""))
        if num>=1 and num<1000000:
            arr.append(num)
        else:
            print("0 and negative nmers cant be accepted")
    print("Missing elements are")
    for i in range(1,n+1):
        if i not in arr:
            print(i)
else:
    print("Not Possible")
