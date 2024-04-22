#include<stdio.h>
#include<string.h>
main(){
	char str1[30];
	printf("Enter name to reverse: ");
	gets(str1);
	
	strrev(str1);
	printf("Reverse of given name is: %s",str1);
}
