n=int(input("Enter the size "))
repeat=[]
arr=[]
if n>=1 and n<100000:
    print("Enter inputs")
    for i in range(n):
        num=int(input(""))
        if num>=0 and num<n:
            arr.append(num)
        else:
            print("Not valid")
        
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]==arr[j]:
                if arr[i] not in repeat:
                    repeat.append(arr[i])
else:
    print("Try Again!!")
if len(repeat)>0:
    print(repeat)
else:
    print("-1")
