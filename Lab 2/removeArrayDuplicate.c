#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    int a[n],temp[n];

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
    
   
    printf("1st Array :\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }

    
    //command element logic
    printf("\nComman Elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]!=a[j])
			{
				temp[i]=a[i];
			}
		}	
	}
    
    printf("1st New Array :\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",temp[i]);
    }
       
}
