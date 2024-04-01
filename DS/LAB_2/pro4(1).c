#include<stdio.h>
void main(){
	int s,i;
	
	printf("Enter size of array : ");
	scanf("%d",&s);
	
	int arr[s],newArr[s];
	
	
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("old array : ");
	for(i=0;i<s;i++){
			printf("%d ",arr[i]);
			newArr[i]=arr[i];
	}
	
	printf("new array : ");
	for(i=0;i<s;i++){
		printf("%d ",newArr[i]);
	}
}
