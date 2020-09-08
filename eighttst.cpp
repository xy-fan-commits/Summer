#include<stdio.h>
int main()
{
int i,j,m,n,x=0,y=0;
i=10,j=20;
m=++i;
n=j++;
x+=i--;
y-=--j;
printf("i=%d,j=%d,\nm=%d,n=%d,\nx=%d,y=%d\n",i,j,m,n,x,y);
}
