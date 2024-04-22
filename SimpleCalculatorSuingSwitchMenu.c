#include<stdio.h>
main(){
	int a,b,ch;
	printf("Enter 1 for Addition\n");
	printf("Enter 2 for Substraction\n");
	printf("Enter 3 for Multiplication\n");
	printf("Enter 4 for Division\n");
	printf("Enter 5 for Modulo\n\n");
	printf("Enter no. a: ");
	scanf("%d",&a);
	printf("Enter no. b: ");
	scanf("%d",&b);
	
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1: printf("Addition of a and b is: %d",a+b);
		break;
		case 2: printf("Substraction of a and b is: %d",a-b);
		break;
		case 3: printf("Multiplication of a and b is: %d",a*b);
		break;
		case 4: printf("Division of a and b is: %d",a/b);
		break;
		case 5: printf("Modulo of a and b is: %d",a%b);
		break;
	}
}
