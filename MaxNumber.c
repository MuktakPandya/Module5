#include<stdio.h>
main(){
	int a[5]={9,8,7,6,5},i,j,temp;
	
	printf("Given array is 9 8 7 6 5\n");
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("\nMaximum no. of give array is: %d",a[i]);
	
}
