#include<stdio.h>
#include<string.h>
main(){
	char str1[30],str2[10];
	int i=0,count=0,len1,len2;
	printf("Enter First Name: ");
	scanf("%s",&str1);
	printf("Enter Last Name: ");
	scanf("%s",&str2);
	
	printf("With using printf: %s %s\n",str1,str2);
	
	len1=strlen(str1);
	len2=strlen(str2);
	
	for(i=0;i<=len2;i++){
		str1[len1+i]=str2[i];
	}
	printf("Strings after combining First and Last Name: %s",str1);
}
