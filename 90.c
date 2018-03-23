#include <stdio.h>
#include<string.h>
#include<conio.h>
void main() 
{	
   char a[10];
   int n,a,i;
   clrscr();
   scanf("%s",a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
       if(a[i]>='0'&&a[i]<='9')
       {
           printf("%c",a[i]);
       }
   }
getch();
}
