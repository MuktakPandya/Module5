#include<stdio.h>
main()
{
	int i,j,temp; // 
	int a[5];
	printf("Enter 5 array elements\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)// compare
		{
			if(a[j]<a[i])
			{
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
			
		}
	}
	
	printf("Ascending Ordr is \n");
	for(i=0;i<5;i++)

	{
	printf("%d\t",a[i]);
	}
	
	printf("\nDescending Ordr is \n");
	for(i=4;i>=0;i--)

	{
	printf("%d\t",a[i]);
	}	
}
