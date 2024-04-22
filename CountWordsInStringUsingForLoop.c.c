#include<stdio.h>
main(){
	char str1[30];
	int i,count=0;
	printf("Enter name including words,symbols and numbers: ");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++){
		if((str1[i]>='A' && str1[i]<='Z') || str1[i]>='a' && str1[i]<='z'){
		count++;
		}
	}
	printf("No. of words in given string are %d",count);
}
