#include<stdio.h>
#include<string.h>
#define max 1000

int main()
{
int loc;
char mainStr[max],subStr[max];

printf("Enter a string \n");
scanf("%[^\n]s",mainStr);

printf("Enter loc to enter substring \n");
scanf("%d",&loc);

printf("Enter substring\n");
scanf("\n");
scanf("%[^\n]s",subStr);

int i=0, len1 = 0, len2 = 0;
len1 = strlen(mainStr);
len2 = strlen(subStr);

int j=0;
int r = len1+len2;
int n = len2+loc;
char newStr[r],temp;

for(i=0;i<len1;i++){
	newStr[i] = mainStr[i];
}

while(loc<r){
	temp = newStr[loc];	
	
	if(j<len2){	
		mainStr[loc] = subStr[j];
		j++;
	}	
	mainStr[n]=temp;
	n++;
	loc++;
}

	printf("%s",mainStr);

return 0;
}






