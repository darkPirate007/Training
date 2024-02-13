#include <stdio.h> 
#include<string.h>
char checkAnagram(char*,char*); 
int main() {
    char str1[100],str2[100];
    // To check anagram in strings
    printf("Enter the strings");
    scanf("%s%s",str1,str2);
    //char flag = checkAnagram(str1,str2);
    if(checkAnagram(str1,str2) == 1){
        printf("Strings are anagrams");
    }
    else{
        printf("Not anagrams");
    }
    return 0;
}
char checkAnagram(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2))
        return 0;
    
    int freq1[26] = {0};
    int freq2[26] = {0};
    for(int i=0;str1[i] && str2[i];i++){
        freq1[str1[i]-97]++;
        freq2[str2[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i])
            return 0;
    }
    
    return 1;
}
