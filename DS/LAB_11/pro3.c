#include<stdio.h>
void main(){
	int n,*ptr,i;
	printf("enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	ptr=arr;
	for(i=0;i<n;i++){
		printf("enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
}
