#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int k=5;
    int c[3],d[2],Rc[3],Rd[2],Reva[5];
    int i;
    printf("Original Array");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<2;i++)
    {
        d[i]=a[i+3];
    }
    //Outpts
    printf("\nSub_Arr1:");
    for(i=0;i<3;i++)
    printf("\t%d",c[i]);
    printf("\nSub_Arr2:");
    for(i=0;i<2;i++)
    printf("\t%d",d[i]);

    for(i=2;i>=0;i--)
    {
        Rc[2-i]=c[i];
    }
    for(i=1;i>=0;i--)
    {
        Rd[1-i]=d[i];
    }
    printf("\nReverse of Sub_Arr1:");
    for(i=0;i<3;i++)
    printf("\t%d",Rc[i]);
    printf("\nReverse of Sub_Arr2:");
    for(i=0;i<2;i++)
    printf("\t%d",Rd[i]);

    for(i=0;i<3;i++)
    {
        Reva[i]=Rc[i];
    }
    for(i=0;i<2;i++)
    {
        Reva[i+3]=Rd[i];
    }
    printf("\nArray After Reversing subarrays and merging: ");
    for(i=0;i<5;i++)
    printf("\t%d",Reva[i]);
}