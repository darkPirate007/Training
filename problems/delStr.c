#include <stdio.h> 
#include<string.h>
int main() {
    char sen[100],sub[100];
    printf("Enter main string:\n");
    scanf("%[^\n]s",sen);
    printf("Enter sub string:");
    scanf("\n");
    scanf("%[^\n]s",sub);
    int i=0,j=0,flag;
    while(sen[i]!='\0'){
        if(sen[i]==sub[j]){
            i++;
            j++;
            if(sub[j]=='\0'){
                flag = i-j;
                break;
            }
        }
        else{
            j=0;
            i++;
        }
    }
    int n = strlen(sen);
    int m = strlen(sub);

    for(int k=flag;k<n;k++){
        sen[k] = sen[k+m];
    }
    printf("%s",sen);

return 0;
}
