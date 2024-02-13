#include<stdio.h>
#include<string.h>
#define max 1000

int main(){

int loc;
char mainStr[max];
char *token;

printf("Enter a string \n");
scanf("%[^\n]s",mainStr);

int len = strlen(mainStr);

token = strtok(mainStr," ");

int count = 0;
while(token!=NULL){
	++count;
	printf("%s\n",token);
	token = strtok(NULL," ");
}
printf("%d\n",count);

return 0;
}


