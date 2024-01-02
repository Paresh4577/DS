#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	int a[n];
	int temp[n];



	
	printf("%d Enter Size Of Array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements of 1 array:",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("\nRemove Duplicate Elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			if(a[i]!=a[i+1])
			{
				temp[j++]=a[i];
				
			}
		}
	}
	
	for(i=0;i<n;i++){
			printf("%d ",temp[i]);
	}
	

	
}
