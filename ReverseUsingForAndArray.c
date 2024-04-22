#include<stdio.h>
main(){
	int a[5],i;
	printf("Enter 5 elements of array\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\nReverse order of array elements is\n");
	for(i=4;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
