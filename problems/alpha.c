#include<stdio.h>

int checkAlphabet(char);
int isDigit(char);
int isSpecial(char);
void checkInput(char);

int checkAlphabet(char x){
return ((x >= 'a'&& x<='z') || (x>='A' &&  x <= 'Z') );
}

int isDigit(char x){
return (x >='0' && x<='9');
}

void checkInput(char x){

if(checkAlphabet(x))
	printf("Alphabet\n");
else if(isDigit(x))
	printf("Number\n");
else 
	printf("Special Character\n");
}

int main(){

char x;
scanf("%c",&x);
checkInput(x);
return 0;
}

