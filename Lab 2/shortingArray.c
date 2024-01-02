#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp;
    printf("Enter size of an Array :" );
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&a[i]);
    }
    
    printf("Original Array: ");
    for(i=0;i<n;i++)
    {
    	printf(" %d ," ,a[i]);
	}
	
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
	   }
    }
    
    printf("Shorted Array: ");
    for(i=0;i<n;i++)
    {
    	printf(" %d ," ,a[i]);
	}
       
}
