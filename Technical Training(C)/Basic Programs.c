#include<stdio.h>
int main()
{//Generating greatest of 4 numbers
    int a,b,c,d;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Enter another number ");
    scanf("%d",&b);
    printf("Enter another number ");
    scanf("%d",&c);
    printf("Enter another number ");
    scanf("%d",&d);
    printf("Largest of the 4 numbers is:  ");
    if(a>b && a>c && a>d){
        printf("%d",a);
    }
    else if (b>c && b>d){
        printf("%d",b);
    }
    else if (c>d){
        printf("%d",c);
    }
    else{printf("%d",d);}

}

    // BloodGroups
    char bg;
    printf("Enter the blood group : ");
    scanf("%c",&bg);
    switch (bg)
    {
    case 'a': printf("Can donate blood to a and o");
        break;
    case 'b' : printf("Can donate blodd to b and o");
        break;
    case 'O': printf("Can donate to anyone");
    break;
    default: printf("Can donate to ab and o");
        break;
    }
