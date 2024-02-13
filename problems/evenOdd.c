#include<stdio.h>
void evenOdd(int);

void evenOdd(int n){
if(n%2==0){
printf("Even number\n");
}
else{
printf("Odd number\n");
}

}

int main()
{
int n;
scanf("%d",&n);
evenOdd(n);
return 0;
}

