#include<stdio.h>
#include<string.h>
main(){
	char str1[30];
	int i=0,vowel=0,consonant=0;
	printf("Enter any word: ");
	gets(str1);
	
	while(str1[i]!='\0'){
		if(str1[i]>=65 && str1[i]<=90 || str1[i]>=97 && str1[i]<=122){
			if(str1[i]=='A' || str1[i]=='a' || str1[i]=='E' || str1[i]=='e' || str1[i]=='I' || str1[i]=='i' || str1[i]=='O' || str1[i]=='o' || str1[i]=='U' || str1[i]=='u'){
				vowel++;
			}
			else{
				consonant++;
			}
		}
		i++;
	}
	printf("No of vowels is: %d\n",vowel);
	printf("No of consonants is: %d",consonant);
}
