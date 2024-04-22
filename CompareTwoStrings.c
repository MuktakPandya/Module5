#include<stdio.h>
#include<string.h>
main(){
	char str1[30],str2[10];
	int value;
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	
	value=strcmp(str1,str2);
	if(value==0){
		printf("Both strings are equal");
	}
	else{
		printf("Both strings are not equal, their value is: %d",value);
	}
}
