#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);

	int l = 0;
	int h = strlen(str) - 1;

	while(l<h){
		if(str[l] != str[h]){
			printf("%s is not a palindrome\n",str);
			break;
		}
		l++;
		h--;
	}

	printf("The string is palindrome!\n");
	return 0;
}

	

