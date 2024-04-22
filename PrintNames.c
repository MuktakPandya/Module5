#include<stdio.h>
int main(){
	char a[5][100];
	int i;
	printf("Enter 5 students' name: \n");
	
	for(i=1;i<=5;i++){
		scanf("%s",&a[i]);
	}
	printf("\nName of 5 students are\n");
	for(i=1;i<=5;i++){
		printf("%s\n",a[i]);
	}
}
