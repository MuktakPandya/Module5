#include<stdio.h>
#include<string.h>
main(){
	char str1[30];
	int i,j,temp,len1;
	
	printf("Enter any word: ");
	gets(str1);
	
	len1=strlen(str1);
	printf("Length of word is %d\n",len1);
	
	for(i=0;i<len1;i++){
		for(j=i+1;j<len1;j++){
			if(str1[i]>str1[j]){
				temp=str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
		}
	}
	printf("Smallest word is %c\n",str1[i]);
	printf("Largest word is %c",str1[j]);
}
