#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,sum=0,avg;
    int a[n],b[n];

	//first size of array
    printf("Enter size of an Array :" );
    scanf("%d",&n);
    
    //first array get 
    printf("Enter First Arrays Element.\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&a[i]);
    }
    
    //seconf array get
    printf("Enter Second Arrays Element.\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&b[i]);
    }
    
    printf("1st Array :\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    
    printf("\n2st Array :\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",b[i]);
    }
    
    
    
    //command element logic
    printf("\nComman Elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
			}
		}
		
	}
    
       
}
