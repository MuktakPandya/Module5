#include<stdio.h>
#include<string.h>
main(){
	char str1[30];
	char str2[10];
	char value[30];
	
	printf("Enter string to copy: ");
	scanf("%s",&str1);
	
	printf("Enter string 2: ");
	scanf("%s",&str2);
	
	printf("String 1 before copying is: %s\n",str1);
	printf("String 2 before copying is: %s\n",str2);
	
	strcpy(str1,str2);
	printf("String 1 after copying string 2 is %s",str1);
}
