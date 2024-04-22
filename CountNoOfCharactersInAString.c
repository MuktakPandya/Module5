#include<stdio.h>
main(){
	char str1[30];
	int i=0,count=0;
	printf("Enter any word including characters: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		if(str1[i]>=41 && str1[i]<=57 || str1[i]>=58 && str1[i]<65 || str1[i]>90 && str1[i]<97 || str1[i]>122){
			count++;
		}
		i++;
	}
	printf("No of characters is: %d",count);
}
