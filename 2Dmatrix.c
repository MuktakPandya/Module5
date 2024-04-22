#include<stdio.h>
main(){
	int a[2][2],i,j;
	printf("Enter elements of 2D matrix\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements of 2D matrix are\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
