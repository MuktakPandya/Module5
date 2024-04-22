#include<stdio.h>
#include<string.h>
main(){
	char str1[30],str2[20];
	printf("Enter string to convert to Upper case: ");
	gets(str1);
	strupr(str1);
	
	printf("String after converting to upper case is: %s\n",str1);
	
	printf("\nEnter string to convert to Lower case: ");
	gets(str2);
	strlwr(str2);
	printf("String after converting to lower case is: %s",str2);
}
