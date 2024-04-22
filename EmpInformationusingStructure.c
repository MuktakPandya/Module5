#include<stdio.h>
#include<string.h>
struct employee{
	int empno;
	char name[20];
	char address[30];
	int age;
};
main(){
	
	int i;
	struct employee e[5];
	
	e[0].empno=1;
	strcpy(e[0].name,"AB");
	strcpy(e[0].address,"1b2c");
	e[0].age=21;

	e[1].empno=2;
	strcpy(e[1].name,"BC");
	strcpy(e[1].address,"3c4d");
	e[1].age=22;
	
	e[2].empno=3;
	strcpy(e[2].name,"CD");
	strcpy(e[2].address,"5d6e");
	e[2].age=23;
	
	e[3].empno=4;
	strcpy(e[3].name,"DE");
	strcpy(e[3].address,"7e8f");
	e[3].age=24;
	
	e[4].empno=5;
	strcpy(e[4].name,"EF");
	strcpy(e[4].address,"9a10b");
	e[4].age=25;	
	printf("Information of 5 employees are below\n");
	for(i=0;i<5;i++){
	
		printf("\nEmployee No: %d\nName: %s\nAddress: %s\nAge: %d\n",e[i].empno,e[i].name,e[i].address,e[i].age);
	}
}
