#include<stdio.h>
main(){
	char str1[30];
	char str2[10];
	int i, flag=0;
	
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	
	printf("\nString 1 is: %s\n",str1);
	printf("String 2 is: %s\n",str2);
	
	for(i=0;str1[i]!='\0' || str2[i]!='\0';i++){
		if(str1[i]!=str2[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Both strings are not equal");
	}
	else{
		printf("Both strings are equal");
	}
}
