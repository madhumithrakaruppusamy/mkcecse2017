#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c)
{
printf("a");
}
elseif(b>=a && b>=c)
{
printf("b");
}
elseif(c>=a && c>=b)
{
printf("c");
}
else
{
printf("not greater");
}
}
