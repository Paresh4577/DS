#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0,avg;
    int arr[n];

    printf("Enter size of an Array :" );
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       sum+=arr[i];
    }
    printf("\nThe sum of Element : %d",sum);
    printf("\nThe Average of Element :%d",(sum/n));
       
}