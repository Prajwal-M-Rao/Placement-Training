N=int(input("Enter the size "))
arr=[]
if N>=2 and N<=100000:
    print("Enter elements : ")
    for i in range(N):
        num=int(input(""))
        if num>=1 and num<=100000:
            arr.append(num)
        else:
            print("Positive numbers please")
    arr.sort()
    for i in range(N):
        if arr[N-1]==arr[N-2]:
            print(arr[N-3])
            exit()
        else:
            print(arr[N-2])
            exit()
else:
    print("Try Again!!")