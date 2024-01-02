#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,n1,n2;
    int arr[n];

    printf("Enter size of an Array :" );
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Array :\n");
    for(i=0;i<n;i++)
    {
        printf(" %d : ",arr[i]);
    }
    
    printf("\nEnter Number to find Element:\n");
    scanf("%d",&n1);
    printf("Enter Number to Replace Element:\n");
    scanf("%d",&n2);
    
    for(i=0;i<n;i++)
    {
    	if(arr[i]==n1)
    	{
    		arr[i]=n2;
		}
	}
    printf("New Array :\n");
    for(i=0;i<n;i++)
    {
        printf(" %d : ",arr[i]);
    }
}
