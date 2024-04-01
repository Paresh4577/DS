#include<stdio.h>
void main(){
	int s,i,element,replaceElement;
	
	printf("Enter size of array : ");
	scanf("%d",&s);
	
	int arr[s];
	
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter element which you want to replace : ");
	scanf("%d",&element);
	
	printf("Enter Replace element : ");
	scanf("%d",&replaceElement);
		
	for(i=0;i<s;i++){
		if(arr[i]==element){
			arr[i]=replaceElement;
		}
	}
	
	printf("after replacment :\n ");
	for(i=0;i<s;i++){
		printf("%d  ",arr[i] );
	}
	
}
