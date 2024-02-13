#include<stdio.h>
 int main()
{
int n;
printf("Enter the digit \n");
scanf("%d",&n);
printf("Enter an array upto %d\n",n);
int arr[n],sum = 0,mySum=0,miss; 
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
mySum += i;
sum += arr[i];
}

mySum += n;
printf("Missing number is %d \n",mySum-sum);

return 0;
}
