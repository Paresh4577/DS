#include<stdio.h>
void main(){
	int s,i,max,index;
	
	printf("Enter size of array : ");
	scanf("%d",&s);
	
	int arr[s];
	
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
		
	}
	max=arr[0];
	for(i=0;i<s;i++){
		if(max<arr[i]){
			max=arr[i];
			index=i;
		}
	}
	
	printf("max element is : %d\n",max);
	printf("index is : %d",index);
	
}
