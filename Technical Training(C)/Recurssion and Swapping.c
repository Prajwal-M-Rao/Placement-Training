//RECURSSION
/*#include<stdio.h>
int recur_fun(int n)
{
    if(n==0)
        return 1;
    else
        return n*recur_fun(n-1);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,recur_fun(n));
}*/

//Swapping two numbers 
#include<stdio.h>
int main(){
int a,b,temp;
a=10;
b=25;
printf("A=%d\nB=%d",a,b);
printf("\nAfter Swapping\n");
temp=a;
a=b;
b=temp;
printf("A=%d\nB=%d",a,b);
}