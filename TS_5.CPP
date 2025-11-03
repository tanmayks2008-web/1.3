#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("\nEnter how many odd numbers do you want : ");
scanf("%d",&n);
printf("First %d odd numbers : \n",n);
for(i=1;i<=n;i++)
{
printf("\n%d",2*i-1);

}
getch();


}
