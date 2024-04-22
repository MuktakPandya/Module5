#include<stdio.h>
#include<string.h>
main(){
	char str1[30],str2[10];
	int i,len1;
	printf("Enter string name: ");
	gets(str1);
	
	len1=strlen(str1);
	for(i=len1-1;i>=0;i--){
		{
			str2[i++]=str1[i];
		}
		
	}
	printf("%s",str2);
}
