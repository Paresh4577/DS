#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int arr[n];
    int max=arr[0];

    printf("Enter size of an Array :" );
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("The Largest Element : ",max);
}
