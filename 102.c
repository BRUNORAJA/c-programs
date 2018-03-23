   #include<stdio.h>
   #include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number:");
scanf("%d",&n);
if(n%2==0)
{
n=n/2;
printf("%d",n);
}
else
{
printf("%d", n);
}
   getch();
}
