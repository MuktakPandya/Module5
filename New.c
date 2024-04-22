#include<stdio.h>
#include<stdio.h>
main(){
	char str1[30], str2[10];
	int i;
	printf("Enter string 1: ");
	scanf("%s",&str1[i]);
	printf("Enter string 2: ");
	scanf("%s",&str2[i]);
	
	printf("\nString 1 before copying is: %s\n",str1);
	printf("String 2 before copying is: %s\n",str2);
	
	while(str1[i]!='\0'){
		str2[i]=str1[i];
	}
	printf("\nString 1 after copying string 2 is: %s",str1);
}
