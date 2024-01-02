#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int a[n];
    int b[n];

    printf("Enter size of an Array :" );
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       b[i]=a[i];
       printf("\nArray A: %d ",a[i]);
       printf("\nArray B: %d \n",b[i]);
    }
    
       
}
