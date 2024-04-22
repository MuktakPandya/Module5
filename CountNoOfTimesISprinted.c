#include<stdio.h>
main(){
	char str1[30];
	int i=0,count=0;
	printf("Enter any sentence: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		if(str1[i]='i'){
			if(str1[i+1]='s'){
				count++;
			}
		}
		i++;
	}
	printf("No. of times 'is' printed is: %d",count);
}
