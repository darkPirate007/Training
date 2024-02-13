#include <stdio.h> 
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string\n");
    scanf("%s",str);
    
    int i = 0,l = 0,r = 0,count = 0;
    int j = strlen(str) - 1;
    
    //for first iteration
    if(str[i] >='A' && str[i] <='Z'){
            l++;
        }
    if(str[j] >='A' && str[j] <='Z'){
            r++;
        }
    while(i<j){
        
        if(r>=l){
            i++;
            if(str[i] >='A' && str[i] <='Z'){
                l++;
            }
        }
        else{ //r<l
            count++;
            j--;
            if(str[j] >='A' && str[j] <='Z'){
                r++;
            }
        }
    }
    
    printf("Number of ways with left Uppercase more than right %d",count);
    
    return 0;
}
