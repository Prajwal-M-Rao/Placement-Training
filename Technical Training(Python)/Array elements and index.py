n=int(input("Enter the number"))
arr=[]
def search(arr,x):
    for i in range(len(arr)):
        if arr[i]==x:
            return i
if n>=1 and n<=1000000:
    print("Enter elemnts ")
    for i in range(n):
        num=int(input(""))
        if num>=0 and num<1000000:
            arr.append(num)
        else:
            print("0 or above ")
    x=int(input("Enter value to be searched "))
    print(search(arr,x))
else:
    print("Try Again!!")

