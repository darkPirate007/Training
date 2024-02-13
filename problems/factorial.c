#include<stdio.h>
int factorial(int);

int main()
{
int n;
scanf("%d",&n);
int num = factorial(n);
printf("%d ",num);
return 0;
}

int factorial(int n)
{
if(n>1)
return n*factorial(n-1);
else
return 1;
}
