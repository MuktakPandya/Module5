#include<stdio.h>
main(){
	char str1[30];
	int i=0,count=0;
	printf("Enter name including words,symbols and numbers: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		if((str1[i]>='A' && str1[i]<='Z') || str1[i]>='a' && str1[i]<='z'){
		count++;
	}
		i++;
	}
	printf("No. of words in given string are %d",count);
}
