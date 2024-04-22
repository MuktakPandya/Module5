#include<stdio.h>
#include<string.h>
main(){
	int value;
	char str1[30];
	printf("Enter string: ");
	gets(str1);
	
	value=strlen(str1);
	
	printf("Length of entered string is: %d",value);
}
