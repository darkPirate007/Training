#include <stdio.h> 
#include<string.h>

int main() {
    char sen[100];
    printf("Enter a string: \n");
    scanf("%[^\n]s",sen);
    int i=0;
    int placeA,placeIs;
    while(sen[i]!='\0'){
        if(sen[i]=='a'){
            placeA = i;
        }
        if(sen[i]=='i'&&sen[i+1]=='s'){
            placeIs = i;
        }
        i++;
    }
    
    printf("Occurence of a: %d\nOccurence of is: %d\n",placeA,placeIs);
    return 0;
}
