#include <stdio.h> 
#include<string.h>
int adjacentAlpha(char*); 
int main() {
    char str1[100];
    // To check consecutive alphabets in string
    printf("Enter the string");
    scanf("%s",str1);
    int c = adjacentAlpha(str1);
    printf("No. of possibilities %d\n",c);

     return 0;
}
int adjacentAlpha(char str1[]){
    int count = 0,i=0;
    while(str1[i]!='\0'){
        if(str1[i+1]-str1[i]==1){
            int j=i;
            while(str1[j]!='\0'){
                str1[j] = str1[j+2];
                j++;
            }
            count++;
            i=0;
        }
        i++;
    }
    return count;
    
}
