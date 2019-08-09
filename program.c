#include<stdio.h>
int main()
{
int x,p,sum=0;
scanf("%d %d\n",&x,&p);
while(x>0)
{
sum=sum+x;
int l=x*(p/100);
x=x-l;
}
printf("%d\n",sum);
return 0;
}
