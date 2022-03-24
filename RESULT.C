#include<stdio.h>
#include<conio.h>
void main()
{
	int physics,chemistry,math,english,hindi;
	float m,p;
	clrscr();
	printf("\n Enter Your Physics Marks :");
	scanf("%d",&physics);
	printf("\n Enter Your Chemistry Marks :");
	scanf("%d",&chemistry);
	printf("\n Enter Your Maths Marks :");
	scanf("%d",&math);
	printf("\n Enter Your English Marks :");
	scanf("%d",&english);
	printf("\n Enter Your Hindi :");
	scanf("%d",&hindi);
	m=(physics+chemistry+math+english+hindi);
	printf("\n Your Total Marks is :%2f",m);
	p=m/5;
	printf("\n Your Total Percentage is :%2f",p);
	getch();
}
