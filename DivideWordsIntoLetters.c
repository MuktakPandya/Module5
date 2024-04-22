#include<stdio.h>
main(){
	char str1[30];
	int i=0;
	printf("Enter word you want to divide into letters: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		printf("Letter %d is %c\n",i,str1[i]);
		i++;
	}
}
