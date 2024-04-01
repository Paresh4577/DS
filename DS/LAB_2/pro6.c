#include<stdio.h>
void main(){
	int s,i,j;
	
	printf("Enter size of array : ");
	scanf("%d",&s);
	
	int arr1[s],arr2[s];
	
	printf("Enter first array : ");
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter second array : ");
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			if(arr1[i]==arr2[j])
				printf("%d",arr1[i]);
		}
	}
}
