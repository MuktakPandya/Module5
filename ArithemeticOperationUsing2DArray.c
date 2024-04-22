#include<stdio.h>
main(){
	int a[2][2],b[2][2],sum[2][2],sub[2][2],mul[2][2],i,j;
	printf("Enter elements of array 1\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements of array 2\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nElements of array 1:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nElements of array 2:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of 2D matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\nSubstraction of 2D matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sub[i][j]=b[i][j]-a[i][j];
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplication of two 2D matris is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mul[i][j]=a[i][j]*b[i][j];
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	
}
