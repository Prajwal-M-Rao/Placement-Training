#include<stdio.h>
int n;
int MAX=50;
int main()
{
 int select,n;
 char s;
 printf("\nEnter the movie(number) you want to watch\n");
 printf("1.KGF\n");
 printf("2.Bahubali\n");
 printf("3.RRR\n");
 printf("4.Chichhorre\n");
 printf("5.Hridayam\n");
 scanf("%d",&select);

 movie_selection(select);
 printf("\nEnter the number of tickets: ");
 scanf("%d",&n);
 if(n<=MAX)
 movie_confirm();
 else
 printf("\nSelect numbers <=50 !!");
 return (0);
}

int movie_selection(int select)
{
    switch (select)
 {
 case 1:printf("KGF\nTicket Prize = Rs.250");
    break;
 case 2:printf("Bahubali!!\nTicket Prize = Rs.300");
    break;
 case 3:printf("RRR\nTicket Prize = Rs.280");
    break;
 case 4:printf("CHichhorre\nTicket Prize = Rs.250");
    break;
 case 5:printf("Hridayam\nTicket Prize = Rs.200");
 default:
    break;
 }
}
void movie_confirm()
{
    char s;
 printf("\nConfirm Tickets:");
 scanf(" %c",&s);
    if (s == 'Y' || s == 'y')
        printf("Ticket Confirmed!!");
    else
        printf("Cancelled");
}

// Online shopping : products,price,add to cart,buy
/*int main()
{
 int select;
 char s[10];
 char choice;
 printf("\nEnter the Items\n");
 printf("1.Laptops\n");
 printf("2.Phones\n");
 printf("3.Keyboards\n");
 printf("4.Speakers\n");
 printf("5.Bluethoots\n");
 scanf("%d",&select);

 movie_selection(select);
 
 printf("\nEnter your choice(will be added to cart) : ");
 scanf("%s",s);
 printf("\nAdded to Cart\n");
 printf("Order Now?(S/N)\n");
 scanf(" %c",&choice);
  if (choice == 'S' || choice == 's')
        printf("ORDER CONFIRMED!!");
  else
        printf("Cancelled");
}

int movie_selection(int select)
{
    switch (select)
 {
 case 1:printf("Laptops\nPrize ranges from Rs.45000 to 150000");
      printf("\nEnter the prize : ");
      scanf("%d",&n);
      if(select==1 && n<90000)
      printf("Your Laptops are DELL,HP,AOC");
      else
       printf("Your Laptops are ROG,MaC");
    break;
 case 2:printf("Phones\nPrize ranges from Rs.10000 to 50000");
      printf("\nEnter the prize : ");
      scanf("%d",&n);
      if(select==2 && n<30000)
      printf("Your Phones are MI,Realme,Oppo,Vivo");
      else
      printf("Your Phones are Apple,OnePlus");
    break;
 case 3:printf("Keyboards\nPrize ranges from Rs.350 to 1500");
      printf("\nEnter the prize : ");
      scanf("%d",&n);
      if(select==3 && n<700)
      printf("Your KeyBoards are Zebronics,Plotium");
      else
      printf("Your KeyBoards are Logitech,Amazon Basics");
    break;
 case 4:printf("Speakers\nPrize ranges from Rs.500 to 3000");
      printf("\nEnter the prize : ");
      scanf("%d",&n);
      if(select==4 && n<2000)
      printf("Your Speakers are Patronics,OT");
      else
      printf("Your Speakers are JBL,Infinity");
    break;
 case 5:printf("Bluetooth\nPrize ranges from Rs.700 to 2500");
      printf("\nEnter the prize : ");
      scanf("%d",&n);
      if(select==5 && n<1500)
      printf("Your Bluetooth are Jaff,def");
      else
      printf("Your Bluetooth are One+,Boat");
      break;
 default:
    break;
 }
}*/
