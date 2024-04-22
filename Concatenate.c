#include<stdio.h>
#include<string.h>
main(){
	char str1[30];
	char str2[10];
	printf("Enter First Name: ");
	scanf("%s",&str1);
	printf("Enter Last Name: ");
	scanf("%s",&str2);
	
	strcat(str1,str2);
	printf("Name after using concatenate function is %s",str1);
}
