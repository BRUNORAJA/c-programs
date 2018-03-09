#include <stdio.h>
#include<conio.h>
int main()
{

int i,s=1,diff,j;                              
int a[20];

     while( s != 0 )                            
    {
for(i=0;i<2;i++)
         scanf("%d", &a[i]);                   

         if( a[i] != EOF )
         {
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
	{
	diff=a[j]-a[i];
	printf("%d\n",diff);
	}
	}
         }	
    }
return 0;
}
