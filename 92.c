#include<stdio.h>
#include<conio.h>
void main()
{
int z,i,a[10];
int sum=0;
clrscr();
printf("no.of elements:");
scanf("%d",&z);
printf("enter the elements:");
for(i=0;i<z;i++)
scanf("%d",&a[i]);
{
for(i=0;i<z;i++)
sum=sum+a[i];
printf("%d",sum);
}
getch();
}
