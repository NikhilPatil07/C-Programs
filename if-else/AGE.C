#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\n Enter The Age :");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n You Can Drive",age);
	}
	else
	{
		printf("\n You Can't Drive",age);
	}
	getch();
}