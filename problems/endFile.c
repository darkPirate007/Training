// Online C compiler to run C program online
#include <stdio.h>
#define MAX 100000
int main() {
    int ch,i=0;
    char arr[MAX];
    while((ch=getchar()) !=EOF){
    //putchar(ch);
    arr[i++] = ch;
    }
     puts(arr);
    return 0;
}
