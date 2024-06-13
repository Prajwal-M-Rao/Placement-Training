#include<stdio.h>
#include<stdlib.h>
int findmindiff(int b[],int m)
{
   int diff=b[m-1]-b[0];
   return diff;
}
int main()
{
    int n,m,i;
    int temp;
    n=7;
    m=3;
    int a[]={3,4,1,9,56,7,9,12};
    
    int b[3]={2,4,3};
    for(i=0;i<m-1;i++){
        if(b[i]>b[i+1])
        {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
        }
    }
    for(i=0;i<m;i++)
    printf("%d\t",b[i]);
    int res=findmindiff(b,m);
    printf("\nRes=%d",res);
    
}