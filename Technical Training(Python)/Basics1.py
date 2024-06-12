n=int(input("Enter a number "))
for i in range(2,n):
    if(n%i==0):
        print("Prime")
        break
    else:
        print("Not Prime")
        break

a=10
b=5
print("The two numbers are a=",a," and b=",b)
print("On swapping")
c=a
a=b
b=c
print("The two numbers on swaping a=",a," and b=",b)

a,b=b,a
print(a,b)

n=int(input("Enter an input : "))
temp=n
reverse=0
while(temp > 0):
    Reminder = temp % 10
    reverse = (reverse * 10) + Reminder
    temp = temp //10
#a=n[::-1]
if n==reverse:
    print("Palindrome")
else:
    print("Not a Palindrome")

