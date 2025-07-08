// FInding number of vowels and consonents
#include <stdio.h>
#include<math.h>

int main() 
{
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        } else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

// FInding areas of circle, triangle and square
int area_of_tri(int l,int b)
{
    return 0.5*l*b;
}
int area_of_sqr(int l)
{
    return l*l;
}
int area_of_cir(int r)
{
    return (22/7)*r*r;
}

int main()
{
    int b,h,l,r,br;
    printf("Area of a Triangle");
    printf("\nEnter the base and height of the triangle\n");
    scanf("%d %d",&b,&h);
    printf("Area of the Triangle is %d",area_of_tri(h,b));

    printf("\nArea of a Circle");
    printf("\nEnter the radius of the circle\n");
    scanf("%d",&r);
    printf("Area of the Circle is %d",area_of_cir(r));

    printf("\nArea of a Square");
    printf("\nEnter the side of the Square\n");
    scanf("%d",&br);
    printf("Area of the Square is %d",area_of_sqr(br));
}
