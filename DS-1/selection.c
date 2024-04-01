#include<stdio.h>
void selection(int a[],int len)
{
	int i,j,min_index;
	for(i=0;i<len-1;i++)
	{
		min_index=i;
		for(j=i+1;j<len;j++)
		{
			if(a[j]<a[min_index])
			{
				min_index=j;
			}
			
		}
		if(min_index!=i)
			{
				int temp;
				temp=a[i];
				a[i]=a[min_index];
				a[min_index]=temp;
			}
	}
}
void main(){
	int size,i,pass,min_index;
	int a[] = {20,45,6,78,90};
	int len = sizeof(a)/sizeof(a[0]);
    
    selection(a,5);
	printf("\nAfter Selection Sort Array:\n");
	for(i=0;i<len;i++){
		printf("\nSorted Elements %d:",a[i]);
	}	
}
