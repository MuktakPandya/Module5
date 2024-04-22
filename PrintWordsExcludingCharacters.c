#include<stdio.h>
main(){
	char str1[30];
	int i=0;
	printf("Enter any word including characters: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		if(str1[i]>=65 && str1[i]<=90 || str1[i]>=97 && str1[i]<=122){
			printf("%c",str1[i]);
		}
		i++;
	}
}
