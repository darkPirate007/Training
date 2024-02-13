// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // enter array input
    printf("Enter the size");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //find equilibrium index
    int leftSum = 0, rightSum = 0, tot = 0, index = -1;
    for(int i=0;i<n;i++){
        tot += arr[i];
    }
    for(int i=0;i<n;i++){
        leftSum += arr[i];
        rightSum = tot - leftSum - arr[i+1];
        
        if(leftSum == rightSum)
        {
            index = i+1;
            printf("Equilibrium at %d",i+1);
        }
        
    }
    
    if(index==-1){
        printf("No Equilibrium found");
    }
    return 0;
}
