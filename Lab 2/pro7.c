#include<stdio.h>
void main(){
	int s,i,j;
	
	printf("Enter size of array : ");
	scanf("%d",&s);
	
	int arr[s],newarr[s];
	
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<s;i++){
		for(j=0;j<s-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j+1];
				arr[j+1] =arr[j];
				arr[j] =temp;
			}
		}
	}
	
	printf("after sorting array : ");
	for(i=0;i<s;i++){
		printf("%d ",arr[i]);
	}
	printf("\n ");
	int index=0;
	for(i=0,j=0;i<s;i++,j++){
		if(arr[i] != arr[i+1]){
			newarr[j]=arr[i];
			printf("%d ",newarr[j]);
		}
	}
	
}
