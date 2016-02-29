#include<stdio.h>
#include</home/bossmool/sorting/ramya.h>

int sorting()
{
printf("enter the  n values ");
scanf("%d",&n);

printf("enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&number[i]);
}


for(i=0;i<=n;i++)
{
for(j=0;j<=(n-i-1);j++)
{

if(number[j]>number[j+1])
{
a=number[j];
number[j]=number[j+1];
number[j+1]=a;
}
}
}

printf("the number arranged in ascendingorder are given below ");
for(i=0;i<=n;i++)
{
printf("%d\n",number[i]);
}
return 0;
}
  


