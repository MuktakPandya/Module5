#include<stdio.h>
main(){
	char str1[30];
	int i=0, alphabet=0,character=0,digit=0;
	printf("Enter any word including alphabets, characters and digits: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		if(str1[i]>=33 && str1[i]<=47 || str1[i]>=58 && str1[i]<65 || str1[i]>90 && str1[i]<97 || str1[i]>122){
			character++;
		}
		if(str1[i]>=65 && str1[i]<=90 || str1[i]>=97 && str1[i]<122){
			alphabet++;
		}
		if(str1[i]>=48 && str1[i]<=57){
			digit++;
		}
		i++;
	}
	printf("\nNo of alphabets is: %d\n",alphabet);
	printf("No of characters is: %d\n",character);
	printf("No of digits is: %d",digit);
}
