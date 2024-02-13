#include <stdio.h>

void add(int ,int );
void subtract(int ,int );
void multiply(int ,int );
void divide(int,int);
 
void add(int a,int b){
    int add = a+b;
    printf("%d\n",add);
}
void subtract(int a,int b){
    int add = a-b;
    printf("%d\n",add);
}
void divide(int a,int b){
    int add = a/b;
    printf("%d\n",add);
}
void multiply(int a,int b){
    int add = a*b;
    printf("%d\n",add);
}
int main() {
    int a,b;
    printf("Calculator\nEnter two numbers:\n");
scanf("%d%d",&a,&b);
    add(a,b);
    subtract(a,b);
    multiply(a,b);
    divide(a,b);

    return 0;
}
