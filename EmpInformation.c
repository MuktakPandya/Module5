#include<stdio.h>
main(){
	printf("Information of five employees are\n");
	int i;
	int empno[5]={1,2,3,4,5};
	char empname[5][100]={"A","B","C","D","E"};
	char address[5][100]={"1a","2b","3c","4d","5e"};
	int age[5]={21,22,23,24,25};
	
	for(i=0;i<5;i++){
		printf("\nEmployee %d",i);
		printf("\nEmployee no: %d",empno[i]);
		printf("\nEmployee name: %s",empname[i]);
		printf("\nAddress: %s",address[i]);
		printf("\nAge: %d\n\n",age[i]);
	}
}
