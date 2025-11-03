#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("\nenter the value of n : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(2*i);
}

printf("the sum of first odd %d natural numbers : %d",n,sum);
getch();
}