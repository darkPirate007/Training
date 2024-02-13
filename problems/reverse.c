#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
//reverse an array
int rev[n];
for(int i=0;i<n;i++){
rev[i]=arr[n-i-1];
}

for(int i=0;i<n;i++){
printf("%d ",rev[i]);
}
return 0;
}
