#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	int a[n];
	int b[n];
//	int temp[n];

	
	printf("%d Enter Size Of Array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements of 1 array:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements of 2 array:",i);
		scanf("%d",&b[i]);
	}
	
	printf("\nComman Elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d ",a[i]);
			}
		}
	}
	
//	printf("The New Array:\n");
//	for(i=0;i<n;i++)
//    {
//    	for(j=i+1;j<n;j++){
//    		 printf("%d ",temp[i]);
//		}
//      
//    }
	

	
}
