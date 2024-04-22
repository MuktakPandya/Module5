#include<stdio.h>
main(){
	char str1[30];
	int i=0;
	
	printf("Enter name you want to find length: ");
	gets(str1);
	puts(str1);
	
	while(str1[i]!='\0'){
		i++;
	}
	printf("Length of string without using inbuilt function: %d",i);
}
