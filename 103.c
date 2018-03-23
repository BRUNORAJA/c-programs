  #include<stdio.h>
     #include<conio.h>
  #include<string.h>
int main()
{
char a[100];
int n,i;
clrscr();
printf("\n enter the string:");
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==' ')
{
a[i+1]-=32;	
}
}
a[0]-=32;
printf("%s",a);
getch();	
}
