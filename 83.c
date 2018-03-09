#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e,f;
    clrscr();
    scanf("%d %d",&a,&b);
    printf("\n%d / %d",a,b);
    scanf("%d %d",&c,&d);
    printf("\n%d %\t%d",c,d);
    scanf("%d %d",&e,&f);
    printf("\n%d / %d",e,f);
    printf("\n%d",(a/b));
    printf("\n%d",(c%d));
    printf("\n%d",(e/f));
    getch();
}
