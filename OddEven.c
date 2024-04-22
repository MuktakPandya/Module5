#include<stdio.h>
main(){
	int a[5],i,odd=0,even=0;
	printf("Enter 5 no. of array\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		if(a[i]%2!=0){
			printf("%d is odd\n",a[i]);
			odd++;
		}
		else{
			printf("%d is even\n",a[i]);
			even++;
		}
	}
	printf("\nNo. of odd no.s are %d",odd);
	printf("\nNo. of even no.s are %d",even);
}
