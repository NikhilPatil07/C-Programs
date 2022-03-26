#include<stdio.h>
#include<conio.h>
void main()
{
    int area,length,breadth;
    clrscr();
    printf("Enter the value of length :\n");
    scanf("%d",&length);
    printf("Enter the value of breadth :\n");
    scanf("%d",&breadth);
   area=length*breadth;
   printf("\nThe area of rectangle is : %d",area);
   getch();
   
}
